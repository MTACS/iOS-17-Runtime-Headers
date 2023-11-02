
@interface ASVGesture : NSObject {
    <ASVGestureDataSource> * _dataSource;
    bool  _firstTouchWasOnAsset;
    void _initialAssetLocationOnScreen;
    void _latestAssetLocationOnScreen;
}

@property (nonatomic) <ASVGestureDataSource> *dataSource;
@property (nonatomic) bool firstTouchWasOnAsset;
@property (nonatomic) void initialAssetLocationOnScreen;
@property (nonatomic) void latestAssetLocationOnScreen;

- (void).cxx_destruct;
- (id)dataSource;
- (void)finishGesture;
- (bool)firstTouchWasOnAsset;
- (id)initWithDataSource:(id)arg1;
- (void)initialAssetLocationOnScreen;
- (void)latestAssetLocationOnScreen;
- (void)setDataSource:(id)arg1;
- (void)setFirstTouchWasOnAsset:(bool)arg1;
- (void)setInitialAssetLocationOnScreen;
- (void)setLatestAssetLocationOnScreen;
- (void)updateGesture;

@end
