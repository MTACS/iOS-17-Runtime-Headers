
@interface HUHomePodDetailView : UIButton {
    <HUHomePodDetailViewDelegate> * _delegate;
    bool  _isAnimatingPop;
    unsigned long long  _mediaSystemRole;
    UIImageView * _unitBadgeLabel;
    UIView * _unitImageView;
    UILabel * _unitNameLabel;
}

@property (nonatomic) <HUHomePodDetailViewDelegate> *delegate;
@property (nonatomic) bool isAnimatingPop;
@property (nonatomic, readonly) unsigned long long mediaSystemRole;
@property (nonatomic, readonly) UIImageView *unitBadgeLabel;
@property (nonatomic, readonly) UIView *unitImageView;
@property (nonatomic, copy) <HFStringGenerator> *unitName;
@property (nonatomic, readonly) UILabel *unitNameLabel;

- (void).cxx_destruct;
- (void)_setupConstraints;
- (void)_speakerTapped;
- (void)_updateImagesForRole;
- (id)delegate;
- (id)initWithRole:(unsigned long long)arg1 variant:(unsigned long long)arg2;
- (bool)isAnimatingPop;
- (unsigned long long)mediaSystemRole;
- (void)setDelegate:(id)arg1;
- (void)setIsAnimatingPop:(bool)arg1;
- (void)setUnitName:(id)arg1;
- (id)unitBadgeLabel;
- (id)unitImageView;
- (id)unitName;
- (id)unitNameLabel;

@end
