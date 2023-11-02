
@interface SAUIListenAfterSpeakingBehavior : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *startAlertSoundID;
@property (readonly) Class superclass;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setStartAlertSoundID:(id)arg1;
- (id)startAlertSoundID;

@end
