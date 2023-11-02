
@interface HealthExperienceUI.ScaledLabelConstraint : NSLayoutConstraint {
    void rawConstant;
    void referenceLabel;
}

@property (nonatomic) UILabel *referenceLabel;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)init;
- (id)referenceLabel;
- (void)setReferenceLabel:(id)arg1;
- (void)textSizeChanged;

@end
