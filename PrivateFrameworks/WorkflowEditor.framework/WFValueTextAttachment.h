
@interface WFValueTextAttachment : NSTextAttachment {
    NSDictionary * _attributes;
    double  _cornerRadius;
    NSAttributedString * _displayString;
    bool  _requiresRedraw;
    bool  _selected;
    NSString * _stringValue;
}

@property (nonatomic, retain) NSDictionary *attributes;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } borderInsets;
@property (nonatomic) double cornerRadius;
@property (nonatomic, readonly) NSAttributedString *displayString;
@property (nonatomic) bool requiresRedraw;
@property (nonatomic) bool selected;
@property (nonatomic, retain) NSString *stringValue;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } textInsets;
@property (nonatomic, retain) id value;
@property (nonatomic, readonly) NSString *valueName;

+ (id)humanReadableStringFromValueTextAttributedString:(id)arg1;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 glyphPosition:(struct CGPoint { double x1; double x2; })arg3 characterIndex:(unsigned long long)arg4;
- (id)attributes;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })borderInsets;
- (double)cornerRadius;
- (id)displayString;
- (id)imageForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textContainer:(id)arg2 characterIndex:(unsigned long long)arg3;
- (id)initWithData:(id)arg1 ofType:(id)arg2;
- (bool)requiresRedraw;
- (bool)selected;
- (void)setAttributes:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setRequiresRedraw:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)setStringValue:(id)arg1;
- (void)setValue:(id)arg1;
- (id)stringValue;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })textInsets;
- (id)value;
- (id)valueName;

@end
