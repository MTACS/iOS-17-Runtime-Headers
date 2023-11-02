
@interface PAEKeyerSetupUtil : NSObject {
    PAEKeyerCbCrSetup * _keyerCbCrSetup;
    PAEKeyerLumaSetup * _keyerLumaSetup;
    void * _omKeyer;
    void * _omSamples;
}

- (bool)addTolerance;
- (double)autoAdjustSoftGap;
- (double)autoKeySoftness;
- (bool)autoScale;
- (void)dealloc;
- (bool)defineEdge;
- (double)highlightsGain;
- (id)initWithOMSamples:(void*)arg1 colorPrimaries:(int)arg2 atTime:(union { double x1; struct { /* ? */ } *x2; })arg3;
- (bool)keyerActiveAt:(union { double x1; struct { /* ? */ } *x2; })arg1;
- (void*)omKeyer;
- (void)removeKeyframeAtTime:(union { double x1; struct { /* ? */ } *x2; })arg1;
- (void)removeKeyframeAtTime:(union { double x1; struct { /* ? */ } *x2; })arg1 forParam:(int)arg2 withAPI:(id)arg3;
- (void)setAddTolerance:(bool)arg1;
- (void)setDefineEdge:(bool)arg1;
- (double)shadowsGain;
- (double)simpleKeyAmount;
- (double)spreadGain;
- (void)syncChromaWithDB:(union { double x1; struct { /* ? */ } *x2; })arg1;
- (void)syncLumaWithDB:(union { double x1; struct { /* ? */ } *x2; })arg1;
- (void)syncWithDB:(union { double x1; struct { /* ? */ } *x2; })arg1 setAsDefault:(bool)arg2;
- (bool)tight;

@end
