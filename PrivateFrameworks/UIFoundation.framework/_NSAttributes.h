
@interface _NSAttributes : NSObject {
    NSDictionary * _attributes;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
}

- (void)dealloc;
- (id)initWithAttributes:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setAttributesInTextStorage:(id)arg1;

@end
