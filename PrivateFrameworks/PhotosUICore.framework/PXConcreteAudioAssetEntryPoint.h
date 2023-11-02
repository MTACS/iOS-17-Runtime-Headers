
@interface PXConcreteAudioAssetEntryPoint : NSObject <PXAudioAssetEntryPoint> {
    NSArray * _fadeInKeyGainValues;
    NSArray * _fadeInKeyTimeOffsets;
    double  _time;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *fadeInKeyGainValues;
@property (nonatomic, readonly, copy) NSArray *fadeInKeyTimeOffsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double time;

- (void).cxx_destruct;
- (id)description;
- (float)fadeInGainAtOffset:(double)arg1;
- (id)fadeInKeyGainValues;
- (id)fadeInKeyTimeOffsets;
- (unsigned long long)hash;
- (id)initWithTime:(double)arg1 fadeInKeyTimeOffsets:(id)arg2 fadeInKeyGainValues:(id)arg3;
- (bool)isEqual:(id)arg1;
- (double)time;

@end
