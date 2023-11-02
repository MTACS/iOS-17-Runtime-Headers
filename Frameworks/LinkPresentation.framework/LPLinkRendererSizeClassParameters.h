
@interface LPLinkRendererSizeClassParameters : NSObject <NSSecureCoding> {
    bool  _alignButtonWithCaptionTextLeadingEdge;
    bool  _disableTextWrapping;
    bool  _neverShowIcon;
    bool  _onlyShowIcon;
    bool  _preserveIconAspectRatioAndAlignmentWhenScaling;
}

@property (nonatomic) bool alignButtonWithCaptionTextLeadingEdge;
@property (nonatomic) bool disableTextWrapping;
@property (nonatomic) bool neverShowIcon;
@property (nonatomic) bool onlyShowIcon;
@property (nonatomic) bool preserveIconAspectRatioAndAlignmentWhenScaling;

+ (bool)supportsSecureCoding;

- (id)_cacheKey;
- (bool)alignButtonWithCaptionTextLeadingEdge;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)disableTextWrapping;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)neverShowIcon;
- (bool)onlyShowIcon;
- (bool)preserveIconAspectRatioAndAlignmentWhenScaling;
- (void)setAlignButtonWithCaptionTextLeadingEdge:(bool)arg1;
- (void)setDisableTextWrapping:(bool)arg1;
- (void)setNeverShowIcon:(bool)arg1;
- (void)setOnlyShowIcon:(bool)arg1;
- (void)setPreserveIconAspectRatioAndAlignmentWhenScaling:(bool)arg1;

@end
