
@interface CSVoiceTriggerSecondPassResultHolder : NSObject {
    bool  _isSecondChanceCandidate;
    unsigned long long  _result;
    NSDictionary * _voiceTriggerEventInfo;
}

@property (nonatomic, readonly) bool isSecondChanceCandidate;
@property (nonatomic, readonly) unsigned long long result;
@property (nonatomic, readonly) NSDictionary *voiceTriggerEventInfo;

- (void).cxx_destruct;
- (id)description;
- (id)initWithResult:(unsigned long long)arg1 voiceTriggerEventInfo:(id)arg2 isSecondChanceCandidate:(bool)arg3;
- (bool)isSecondChanceCandidate;
- (unsigned long long)result;
- (id)voiceTriggerEventInfo;

@end
