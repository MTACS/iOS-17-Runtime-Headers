
@interface MKThirdPartyPhotoBigAttributionView : MKPhotoBigAttributionView <MKPhotoBigAttributionViewSubclass> {
    _MKUILabel * _firstLineLabel;
    UIView * _labelsView;
    _MKUILabel * _secondLineLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)didEndAnimatingActivityIndicatorView;
- (void)didUpdateAttributionViewType;
- (void)didUpdateMapItem;
- (id)firstLineLabelFont;
- (id)initWithContext:(long long)arg1;
- (id)secondLineLabelFont;
- (void)updateInfoAttributionString;
- (void)willStartAnimatingActivityIndicatorView;

@end
