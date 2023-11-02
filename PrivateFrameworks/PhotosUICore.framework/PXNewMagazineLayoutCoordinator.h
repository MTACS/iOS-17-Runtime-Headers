
@interface PXNewMagazineLayoutCoordinator : NSObject {
    double  _currentBestScore;
    unsigned long long  _currentIndex;
    PXNewMagazineRectArray * _currentLayout;
    PXNewMagazineRectArray * _fallbackLayout;
    NSArray * _paddingInputs;
    NSMutableArray * _qualifiedLayouts;
    bool  _stop;
    bool  _stopIfAnyGoodLayout;
    double  _tileAspectRatio;
}

@property (nonatomic, readonly) PXNewMagazineRectArray *currentBestLayout;
@property (nonatomic) unsigned long long currentIndex;
@property (nonatomic, retain) PXNewMagazineRectArray *currentLayout;
@property (nonatomic, readonly) unsigned long long currentLayoutsCount;
@property (nonatomic, readonly) NSArray *paddingInputs;
@property (nonatomic, retain) NSMutableArray *qualifiedLayouts;
@property (nonatomic) bool stop;
@property (nonatomic, readonly) bool stopIfAnyGoodLayout;
@property (nonatomic, readonly) double tileAspectRatio;

- (void).cxx_destruct;
- (id)currentBestLayout;
- (unsigned long long)currentIndex;
- (id)currentLayout;
- (unsigned long long)currentLayoutsCount;
- (id)initWithPaddingInputs:(id)arg1 tileGrid:(id)arg2 tileAspectRatio:(double)arg3 stopIfAnyGoodLayout:(bool)arg4;
- (id)paddingInputs;
- (id)qualifiedLayouts;
- (double)scoreOfLayout:(id)arg1;
- (void)setCurrentIndex:(unsigned long long)arg1;
- (void)setCurrentLayout:(id)arg1;
- (void)setQualifiedLayouts:(id)arg1;
- (void)setStop:(bool)arg1;
- (bool)stop;
- (bool)stopIfAnyGoodLayout;
- (double)tileAspectRatio;
- (bool)validateCurrentLayout;
- (void)validateCurrentLayoutAsFallback;

@end
