
@interface TTSUnicodeUtils : NSObject

+ (unsigned char)codePointToUtf8ByteSize:(unsigned int)arg1;
+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })utf16RangeFromUTF8Range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 chars:(const char *)arg2 size:(unsigned long long)arg3;
+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })utf8RangeFromUTF16Range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 chars:(const unsigned short*)arg2 size:(unsigned long long)arg3;

@end
