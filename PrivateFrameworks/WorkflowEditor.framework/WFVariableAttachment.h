
@interface WFVariableAttachment : NSTextAttachment <NSCopying, WFVariableDelegate> {
    WFSlotIdentifier * _containingSlotIdentifier;
    bool  _emphasized;
    bool  _enabled;
    UIFont * _font;
    bool  _highlighted;
    NSString * _overrideVariableName;
    bool  _selected;
    UIFont * _surroundingTextFont;
    UIColor * _tintColor;
    WFVariable * _variable;
}

@property (nonatomic, copy) WFSlotIdentifier *containingSlotIdentifier;
@property (getter=isEmphasized, nonatomic) bool emphasized;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, retain) UIFont *font;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic, copy) NSString *overrideVariableName;
@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic, retain) UIFont *surroundingTextFont;
@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic, readonly) WFVariable *variable;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 glyphPosition:(struct CGPoint { double x1; double x2; })arg3 characterIndex:(unsigned long long)arg4;
- (id)containingSlotIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)currentControlState;
- (void)dealloc;
- (id)description;
- (id)font;
- (id)imageForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textContainer:(id)arg2 characterIndex:(unsigned long long)arg3;
- (id)initWithVariable:(id)arg1;
- (bool)isEmphasized;
- (bool)isEnabled;
- (bool)isHighlighted;
- (bool)isSelected;
- (id)overrideVariableName;
- (void)setContainingSlotIdentifier:(id)arg1;
- (void)setEmphasized:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFont:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setOverrideVariableName:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSurroundingTextFont:(id)arg1;
- (void)setTintColor:(id)arg1;
- (id)surroundingTextFont;
- (id)tintColor;
- (id)variable;
- (void)variableDidChange:(id)arg1;
- (id)variableName;

@end
