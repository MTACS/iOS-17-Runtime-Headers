
@interface PFPosterLayout : NSObject {
    PFPosterOrientedLayout * _landscapeLayout;
    PFPosterOrientedLayout * _portraitLayout;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic, readonly) bool isUsingHeadroom;
@property (nonatomic, readonly) PFPosterOrientedLayout *landscapeLayout;
@property (nonatomic, readonly) PFPosterOrientedLayout *portraitLayout;
@property (nonatomic, readonly) bool supportsBothOrientations;

+ (id)layoutWithDictionaryRepresentation:(id)arg1;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)initWithPortraitLayout:(id)arg1 landscapeLayout:(id)arg2;
- (bool)isUsingHeadroom;
- (id)landscapeLayout;
- (id)layoutByUpdatingConfiguration:(id)arg1;
- (id)layoutByUpdatingNormalizedPortraitVisibleFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 landscapeVisibleFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)layoutByUpgradingToConfiguration:(id)arg1;
- (id)portraitLayout;
- (bool)supportsBothOrientations;

@end
