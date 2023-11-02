
@interface AFRequestCompletionOptions : NSObject <NSCopying, NSSecureCoding> {
    AFTriggerlessListeningOptions * _triggerlessListeningOptions;
}

@property (nonatomic, copy) AFTriggerlessListeningOptions *triggerlessListeningOptions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithShowUIDuringListening:(bool)arg1 playAlertBeforeListening:(bool)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setTriggerlessListeningOptions:(id)arg1;
- (id)triggerlessListeningOptions;

@end
