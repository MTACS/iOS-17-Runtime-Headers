
@interface SASmsPlayAudio : SABaseClientBoundCommand

@property (nonatomic, retain) SASmsSms *message;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)playAudio;
+ (id)playAudioWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)message;
- (bool)requiresResponse;
- (void)setMessage:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SiriUIFoundation.framework/SiriUIFoundation

- (long long)sruif_usefulUserResultType;

@end
