
@interface WiFiUsageLQMAnalysisSamplingRate : NSObject {
    unsigned int  _samplingBase;
    unsigned int  _samplingRate;
}

@property (nonatomic, readonly) unsigned int samplingBase;
@property (nonatomic, readonly) unsigned int samplingRate;

- (id)description;
- (id)initWithValue:(id)arg1;
- (unsigned int)samplingBase;
- (unsigned int)samplingRate;

@end
