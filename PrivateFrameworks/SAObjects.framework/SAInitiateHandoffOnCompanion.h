
@interface SAInitiateHandoffOnCompanion : SABaseClientBoundCommand

@property (nonatomic, retain) <SAHandoffPayload> *handoffPayload;
@property (nonatomic, copy) NSNumber *isSiriXRequest;
@property (nonatomic, copy) NSString *lockScreenText;
@property (nonatomic, copy) NSString *lockScreenTextDialogIdentifier;
@property (nonatomic, copy) NSString *notificationText;
@property (nonatomic, copy) NSString *notificationTextDialogIdentifier;
@property (nonatomic, retain) SARemoteDevice *targetDevice;

+ (id)initiateHandoffOnCompanion;
+ (id)initiateHandoffOnCompanionWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)handoffPayload;
- (id)isSiriXRequest;
- (id)lockScreenText;
- (id)lockScreenTextDialogIdentifier;
- (id)notificationText;
- (id)notificationTextDialogIdentifier;
- (bool)requiresResponse;
- (void)setHandoffPayload:(id)arg1;
- (void)setIsSiriXRequest:(id)arg1;
- (void)setLockScreenText:(id)arg1;
- (void)setLockScreenTextDialogIdentifier:(id)arg1;
- (void)setNotificationText:(id)arg1;
- (void)setNotificationTextDialogIdentifier:(id)arg1;
- (void)setTargetDevice:(id)arg1;
- (id)targetDevice;

@end
