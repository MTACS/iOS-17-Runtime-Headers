
@interface SAPhonePlayVoiceMail : SADomainCommand

@property (nonatomic, retain) SARemoteDevice *targetDevice;
@property (nonatomic, copy) NSURL *voiceMailId;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)playVoiceMail;
+ (id)playVoiceMailWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setTargetDevice:(id)arg1;
- (void)setVoiceMailId:(id)arg1;
- (id)targetDevice;
- (id)voiceMailId;

// Image: /System/Library/PrivateFrameworks/SiriUIFoundation.framework/SiriUIFoundation

- (long long)sruif_usefulUserResultType;

@end
