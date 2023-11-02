
@interface SFUnifiedTabBarPointerRegionIdentifier : NSObject {
    unsigned long long  _pointerStyle;
    UIView * _viewForPreview;
}

@property (nonatomic) unsigned long long pointerStyle;
@property (nonatomic, retain) UIView *viewForPreview;

- (void).cxx_destruct;
- (bool)isEqual:(id)arg1;
- (unsigned long long)pointerStyle;
- (void)setPointerStyle:(unsigned long long)arg1;
- (void)setViewForPreview:(id)arg1;
- (id)viewForPreview;

@end
