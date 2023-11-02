
@interface SAVoice : SADomainObject

@property (nonatomic, copy) NSString *gender;
@property (nonatomic, copy) NSString *languageString;
@property (nonatomic, copy) NSString *masteredVersion;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *quality;
@property (nonatomic) long long resourceContentVersion;
@property (nonatomic, copy) NSString *resourceMasteredVersion;
@property (nonatomic) long long voiceContentVersion;
@property (nonatomic, copy) NSString *voiceType;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)voice;
+ (id)voiceWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)gender;
- (id)groupIdentifier;
- (id)languageString;
- (id)masteredVersion;
- (id)name;
- (id)quality;
- (long long)resourceContentVersion;
- (id)resourceMasteredVersion;
- (void)setGender:(id)arg1;
- (void)setLanguageString:(id)arg1;
- (void)setMasteredVersion:(id)arg1;
- (void)setName:(id)arg1;
- (void)setQuality:(id)arg1;
- (void)setResourceContentVersion:(long long)arg1;
- (void)setResourceMasteredVersion:(id)arg1;
- (void)setVoiceContentVersion:(long long)arg1;
- (void)setVoiceType:(id)arg1;
- (long long)voiceContentVersion;
- (id)voiceType;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (id)initWithSiriVoice:(id)arg1;

@end
