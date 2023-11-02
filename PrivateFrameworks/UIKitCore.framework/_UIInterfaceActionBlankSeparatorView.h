
@interface _UIInterfaceActionBlankSeparatorView : UIView <UIInterfaceActionVisualSectionSeparatorDisplaying, UIInterfaceActionVisualSeparatorDisplaying> {
    double  _horizontalLineLeadingInset;
    _UIInterfaceActionSeparatorConstraintController * _separatorViewConstraints;
}

@property (nonatomic) double constantAxisDimension;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double horizontalLineLeadingInset;
@property (nonatomic, readonly, retain) _UIInterfaceActionSeparatorConstraintController *separatorViewConstraints;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)constantAxisDimension;
- (double)horizontalLineLeadingInset;
- (id)init;
- (id)separatorViewConstraints;
- (void)setConstantAxisDimension:(double)arg1;
- (void)setConstantSizedAxis:(long long)arg1;
- (void)setHorizontalLineLeadingInset:(double)arg1;
- (void)updateConstraints;

@end
