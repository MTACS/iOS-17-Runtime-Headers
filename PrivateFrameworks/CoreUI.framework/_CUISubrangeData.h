
@interface _CUISubrangeData : NSData {
    NSData * _data;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
}

- (const void*)bytes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithData:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)length;

@end
