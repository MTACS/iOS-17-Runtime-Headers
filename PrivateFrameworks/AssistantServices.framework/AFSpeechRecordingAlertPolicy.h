
@interface AFSpeechRecordingAlertPolicy : NSObject <NSCopying, NSSecureCoding> {
    AFSpeechRecordingAlertBehavior * _startingAlertBehavior;
    AFSpeechRecordingAlertBehavior * _stoppedAlertBehavior;
    AFSpeechRecordingAlertBehavior * _stoppedWithErrorAlertBehavior;
}

@property (nonatomic, readonly, copy) AFSpeechRecordingAlertBehavior *startingAlertBehavior;
@property (nonatomic, readonly, copy) AFSpeechRecordingAlertBehavior *stoppedAlertBehavior;
@property (nonatomic, readonly, copy) AFSpeechRecordingAlertBehavior *stoppedWithErrorAlertBehavior;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartingAlertBehavior:(id)arg1 stoppedAlertBehavior:(id)arg2 stoppedWithErrorAlertBehavior:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (id)startingAlertBehavior;
- (id)stoppedAlertBehavior;
- (id)stoppedWithErrorAlertBehavior;

@end
