
@protocol _INPBIntentResponsePayloadFailure <NSObject>

@required

- (bool)appLaunchRequested;
- (NSString *)enumTypeName;
- (int)errorCode;
- (bool)hasAppLaunchRequested;
- (bool)hasEnumTypeName;
- (bool)hasErrorCode;
- (void)setAppLaunchRequested:(bool)arg1;
- (void)setEnumTypeName:(NSString *)arg1;
- (void)setErrorCode:(int)arg1;
- (void)setHasAppLaunchRequested:(bool)arg1;
- (void)setHasErrorCode:(bool)arg1;

@end
