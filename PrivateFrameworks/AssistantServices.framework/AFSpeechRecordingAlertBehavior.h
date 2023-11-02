
@interface AFSpeechRecordingAlertBehavior : NSObject <NSCopying, NSSecureCoding> {
    long long  _beepSoundID;
    long long  _style;
}

@property (nonatomic, readonly) long long beepSoundID;
@property (nonatomic, readonly) long long style;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (long long)beepSoundID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 beepSoundID:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (long long)style;

@end
