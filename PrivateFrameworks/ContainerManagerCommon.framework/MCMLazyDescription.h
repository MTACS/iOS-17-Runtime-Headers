
@interface MCMLazyDescription : NSString {
    id /* block */  _block;
    NSString * _value;
}

- (void).cxx_destruct;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (id)description;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithDescriber:(id /* block */)arg1;
- (unsigned long long)length;
- (id)redactedDescription;

@end
