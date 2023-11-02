
@interface SBIconLabelAccessoryView : UIView <SBIconLabelAccessoryView> {
    UIImage * _baseImage;
}

@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } alignmentRectInsets;
@property (nonatomic, retain) UIImage *baseImage;
@property (nonatomic, readonly) double baselineOffsetFromBottom;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasBaseline;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)labelAccessorySystemImageName;
+ (long long)labelAccessorySystemImageScale;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (id)baseImage;
- (double)baselineOffsetFromBottom;
- (bool)hasBaseline;
- (id)initWithCoder:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)prepareForReuse;
- (void)setBaseImage:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)updateWithBaseImage:(id)arg1 legibilitySettings:(id)arg2;
- (void)updateWithLegibilitySettings:(id)arg1 labelFont:(id)arg2;

@end
