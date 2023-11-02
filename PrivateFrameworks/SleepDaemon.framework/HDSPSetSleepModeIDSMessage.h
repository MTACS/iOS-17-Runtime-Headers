
@interface HDSPSetSleepModeIDSMessage : NSObject <BSDescriptionProviding, HDSPIDSMessage> {
    bool  _sleepModeOn;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long destinations;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) bool sleepModeOn;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)destinations;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithSleepModeOn:(bool)arg1;
- (bool)sleepModeOn;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
