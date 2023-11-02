
@interface _UILabelStringContent : _UILabelContent {
    struct { 
        unsigned int isWidthVariant : 1; 
    }  _flags;
    NSString * _string;
}

- (void).cxx_destruct;
- (bool)_isContentEqualToContent:(id)arg1;
- (id)attributedString;
- (id)attributedStringContent;
- (id)contentByApplyingAttribute:(id)arg1 value:(id)arg2 toRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (id)contentWithAttributedString:(id)arg1;
- (id)contentWithString:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithString:(id)arg1 defaultAttributes:(id)arg2;
- (bool)isAttributed;
- (bool)isEqualToAttributedString:(id)arg1;
- (bool)isEqualToString:(id)arg1;
- (bool)isNil;
- (bool)isWidthVariant;
- (long long)length;
- (id)string;

@end
