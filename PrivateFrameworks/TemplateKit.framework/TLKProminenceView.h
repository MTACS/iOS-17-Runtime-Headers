
@interface TLKProminenceView : UIView {
    double  _customColorAlpha;
    unsigned long long  _prominence;
}

@property (nonatomic) double borderWidth;
@property (nonatomic) double customColorAlpha;
@property (nonatomic) unsigned long long prominence;

+ (id)viewWithProminence:(unsigned long long)arg1;

- (double)borderWidth;
- (double)customColorAlpha;
- (void)didMoveToWindow;
- (id)init;
- (id)initWithProminence:(unsigned long long)arg1;
- (unsigned long long)prominence;
- (void)setBorderWidth:(double)arg1;
- (void)setCustomColorAlpha:(double)arg1;
- (void)setProminence:(unsigned long long)arg1;
- (void)tlk_updateForAppearance:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
