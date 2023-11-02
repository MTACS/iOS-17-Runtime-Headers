
@interface PAEKeyerAutokeySetupUtil : NSObject {
    id  _actionAPI;
    id  _apiManager;
    PAEKeyerAutokeySetup * _autokeySetup;
    id  _getAPI;
    PAEKeyerHistogram * _keyerHistogram;
    id  _setAPI;
}

- (void)addInitialSample:(struct Vec3f { float x1[3]; }*)arg1;
- (void)clearInitialSamples;
- (void)dealloc;
- (void)delInitialSample:(int)arg1;
- (void)fillAutokeySamplesArray:(void*)arg1;
- (void)getDataFromDB;
- (void*)getHistogram;
- (float)getHistogramScale;
- (struct Vec3f { float x1[3]; })getInitialSample:(int)arg1;
- (struct Vec3f { float x1[3]; })getInitialSample:(int)arg1 usingArray:(id)arg2;
- (id)getInitialSamples;
- (int)getSamplesNb;
- (id)initWithAPIManager:(id)arg1;
- (void)setHistogram:(void*)arg1;
- (void)setHistogramScale:(float)arg1;
- (void)syncWithDB;
- (void)syncWithDBAsDefault;

@end
