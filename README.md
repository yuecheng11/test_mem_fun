1. memset()函数

        (1)函数原型

        void *memset( void *dest, int c, size_t count )。

        (2)函数作用

        在MSDN中，将该函数的作用描述为：Sets buffers to a specified character，即：将缓存设定为一个专门的字符。简单地说，就是将已开辟内存空间dest的首count个字节的值设为值c。

2. memcpy()函数

       (1)函数原型

       void *memcpy( void *dest, const void *src, size_t count )。

       (2)函数作用

       在MSDN中，将该函数的作用描述为：Copies characters between buffers，即：在缓存之间拷贝字符。也就是说，该函数用来拷贝src所指的内存内容前count个字节到dest所指的内存地址上。

       (3)应用举例
