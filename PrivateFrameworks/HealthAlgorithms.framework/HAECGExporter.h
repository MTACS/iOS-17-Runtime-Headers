
@interface HAECGExporter : NSObject <SRMultiSampleExporting> {
    NSDate * _contactDetected;
    unsigned long long  _counter;
    NSMutableArray * _currentLiveWaveform;
    NSMutableArray * _currentLiveWaveformFlags;
    bool  _ecgApp;
    float  _frequency;
    bool  _fromRightWrist;
    NSDate * _mostRecentDate;
    bool  _rightArmMinusLeftArm;
    bool  _seenEndFlag;
    bool  _seenStartFlag;
    NSString * _sessionIdentifier;
    NSDateFormatter * dateFormatter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool fromRightWrist;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)fromRightWrist;
- (id)generateDictionary;
- (void)resetSession;
- (void)sr_beginMultiSampleStream;
- (id)sr_dictionaryRepresentationWithSample:(id)arg1;
- (id)sr_endMultiSampleStream;

@end
