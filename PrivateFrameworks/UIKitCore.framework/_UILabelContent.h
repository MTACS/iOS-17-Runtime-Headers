
@interface _UILabelContent : NSObject <NSCopying> {
    NSDictionary * _defaultAttributes;
}

- (void).cxx_destruct;
- (bool)_isContentEqualToContent:(id)arg1;
- (id)attributedString;
- (id)attributedStringContent;
- (id)backgroundColor;
- (id)contentByAddingAttribute:(id)arg1 toDefaultAttributesWithValue:(id)arg2;
- (id)contentByAddingAttributesToDefaultAttributes:(id)arg1;
- (id)contentByApplyingAttribute:(id)arg1 value:(id)arg2 toRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (id)contentByApplyingAttributeToEntireRange:(id)arg1 value:(id)arg2;
- (id)contentByCompletingDefaultAttributesWithAttributes:(id)arg1;
- (id)contentWithAttributedString:(id)arg1;
- (id)contentWithDefaultAttributes:(id)arg1;
- (id)contentWithString:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultAttributes;
- (id)defaultValueForAttribute:(id)arg1;
- (id)description;
- (long long)differenceVersusContent:(id)arg1;
- (id)font;
- (unsigned long long)hash;
- (id)initWithDefaultAttributes:(id)arg1;
- (bool)isAttribute:(id)arg1 uniformlyEqualToValue:(id)arg2;
- (bool)isAttributed;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAttributedString:(id)arg1;
- (bool)isEqualToContent:(id)arg1 byAttribute:(id)arg2;
- (bool)isEqualToString:(id)arg1;
- (bool)isNil;
- (bool)isWidthVariant;
- (long long)length;
- (id)paragraphStyle;
- (id)shadow;
- (id)string;
- (id)textColor;
- (id)widthVariantContentForView:(id)arg1;

@end
