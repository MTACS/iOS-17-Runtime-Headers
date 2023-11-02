
@interface MPCAudioSpectrumObserver : NSObject {
    struct _MPCAudioFrequencyBandInternal { struct MPCAudioFrequencyBand { float x_1_1_1; float x_1_1_2; } x1; float x2; float x3; float x4; unsigned long long x5; } * _bands;
    unsigned long long  _bandsStorageSize;
    long long  _numberOfBands;
    id /* block */  _onUpdate;
    float  _powerLevel;
}

@property (nonatomic, readonly) long long numberOfBands;
@property (nonatomic, copy) id /* block */ onUpdate;
@property (nonatomic) float powerLevel;

+ (id)defaultObserver;

- (void).cxx_destruct;
- (void)_resizeBandStorage;
- (long long)addAnalysisBand:(struct MPCAudioSpectrumAnalyzerBand { float x1; float x2; })arg1;
- (long long)addFrequencyBand:(struct MPCAudioFrequencyBand { float x1; float x2; })arg1;
- (float)averagePowerOfBandAtIndex:(long long)arg1 band:(out struct MPCAudioSpectrumAnalyzerBand { float x1; float x2; }*)arg2;
- (float)averagePowerOfFrequencyBandAtIndex:(long long)arg1 frequencyBand:(out struct MPCAudioFrequencyBand { float x1; float x2; }*)arg2;
- (void)beginReport;
- (void)dealloc;
- (void)finishReport;
- (long long)numberOfBands;
- (id /* block */)onUpdate;
- (float)powerLevel;
- (void)setOnUpdate:(id /* block */)arg1;
- (void)setPowerLevel:(float)arg1;

@end
