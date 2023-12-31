
@interface SALCMContent : SADomainObject

@property (nonatomic, copy) NSString *canonicalId;
@property (nonatomic, copy) NSString *channelId;
@property (nonatomic, copy) NSURL *externalId;
@property (nonatomic, copy) NSString *title;

+ (id)content;
+ (id)contentWithDictionary:(id)arg1 context:(id)arg2;

- (id)canonicalId;
- (id)channelId;
- (id)encodedClassName;
- (id)externalId;
- (id)groupIdentifier;
- (void)setCanonicalId:(id)arg1;
- (void)setChannelId:(id)arg1;
- (void)setExternalId:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
