
@interface _NSAttributeRun : NSObject <NSCopying> {
    NSMutableArray * _attributesArray;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithTextStorage:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)restoreAttributesOfTextStorage:(id)arg1;

@end
