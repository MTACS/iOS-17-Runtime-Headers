
@interface NTKCrownInputHandler : NSObject <NTKClockHardwareInput> {
    <NTKCrownInputHandlerDelegate> * _delegate;
    double  _progress;
    bool  _useWideIdleCheck;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NTKCrownInputHandlerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double offsetPerRevolution;
@property (nonatomic) double progress;
@property (readonly) Class superclass;
@property (nonatomic) bool useWideIdleCheck;

- (void).cxx_destruct;
- (bool)_handlePhysicalButton:(unsigned long long)arg1 event:(unsigned long long)arg2;
- (bool)_wheelChangedWithEvent:(id)arg1;
- (id)delegate;
- (void)generateMajorDetents;
- (void)generateMinorDetents;
- (id)init;
- (double)offsetPerRevolution;
- (double)progress;
- (void)setDelegate:(id)arg1;
- (void)setOffsetPerRevolution:(double)arg1;
- (void)setProgress:(double)arg1;
- (void)setUseWideIdleCheck:(bool)arg1;
- (bool)useWideIdleCheck;

@end
