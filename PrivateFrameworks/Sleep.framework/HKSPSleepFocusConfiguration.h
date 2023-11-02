
@interface HKSPSleepFocusConfiguration : NSObject <BSDescriptionProviding, NAEquatable, NAHashable> {
    bool  _mirrorsFocusModes;
    NSUUID * _uuid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasSleepFocusMode;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool mirrorsFocusModes;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *uuid;

+ (id)readFromDefaults;

- (void).cxx_destruct;
- (id)copy;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (bool)hasSleepFocusMode;
- (unsigned long long)hash;
- (id)initWithUUID:(id)arg1 mirrorsFocusModes:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (bool)mirrorsFocusModes;
- (id)sleepFocusConfigurationUpdatingMirrorsFocusModes:(bool)arg1;
- (id)sleepFocusConfigurationUpdatingUUID:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)uuid;
- (void)writeToDefaults;

@end
