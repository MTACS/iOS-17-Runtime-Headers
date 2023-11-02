
@interface SASHeater : NSObject {
    <SASHeaterDelegate> * _delegate;
    bool  _predictedRecordRouteIsZLL;
    double  _preheatTimeInterval;
    NSTimer * _preheatTimer;
    double  _preparationStartTime;
}

@property (nonatomic) <SASHeaterDelegate> *delegate;
@property (nonatomic) bool predictedRecordRouteIsZLL;
@property (nonatomic) double preheatTimeInterval;
@property (nonatomic, retain) NSTimer *preheatTimer;
@property (getter=_preparationStartTime, setter=_setPreparationStartTime:, nonatomic) double preparationStartTime;

- (void).cxx_destruct;
- (void)_cancelPreparation;
- (id)_convertVirtualAudioSubTypeToString:(unsigned int)arg1;
- (double)_preparationStartTime;
- (void)_setPreparationStartTime:(double)arg1;
- (void)_suggestPreheat;
- (void)cancelPreparationForButtonIdentifier:(long long)arg1;
- (id)delegate;
- (bool)predictedRecordRouteIsZLL;
- (double)preheatTimeInterval;
- (id)preheatTimer;
- (void)prepareForUseAfterTimeInterval:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPredictedRecordRouteIsZLL:(bool)arg1;
- (void)setPreheatTimeInterval:(double)arg1;
- (void)setPreheatTimer:(id)arg1;
- (void)updatePredictedRouteIsZLL;

@end
