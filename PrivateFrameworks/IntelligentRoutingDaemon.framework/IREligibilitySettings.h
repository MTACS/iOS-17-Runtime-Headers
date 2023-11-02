
@interface IREligibilitySettings : NSObject {
    NSNumber * _downrankToNoneThr;
    NSNumber * _downrankToNoneWithIgnoringThr;
    NSNumber * _downrankToOneTapThr;
    NSNumber * _initialStateIsOneTap;
    NSNumber * _upRankToOneTapThr;
    NSNumber * _uprankToAutorouteThr;
}

@property (nonatomic, retain) NSNumber *downrankToNoneThr;
@property (nonatomic, retain) NSNumber *downrankToNoneWithIgnoringThr;
@property (nonatomic, retain) NSNumber *downrankToOneTapThr;
@property (nonatomic, retain) NSNumber *initialStateIsOneTap;
@property (nonatomic, retain) NSNumber *upRankToOneTapThr;
@property (nonatomic, retain) NSNumber *uprankToAutorouteThr;

- (void).cxx_destruct;
- (id)downrankToNoneThr;
- (id)downrankToNoneWithIgnoringThr;
- (id)downrankToOneTapThr;
- (id)initialStateIsOneTap;
- (void)setDownrankToNoneThr:(id)arg1;
- (void)setDownrankToNoneWithIgnoringThr:(id)arg1;
- (void)setDownrankToOneTapThr:(id)arg1;
- (void)setInitialStateIsOneTap:(id)arg1;
- (void)setUpRankToOneTapThr:(id)arg1;
- (void)setUprankToAutorouteThr:(id)arg1;
- (id)upRankToOneTapThr;
- (id)uprankToAutorouteThr;

@end
