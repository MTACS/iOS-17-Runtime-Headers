
@interface SASTMessageItem : AceObject <SASTTemplateItem>

@property (nonatomic, copy) NSURL *audioMessageURL;
@property (nonatomic, copy) NSString *bundleId;
@property (nonatomic, retain) SAUIDecoratedText *content;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SAUIDecoratedText *recipient;
@property (nonatomic, copy) NSString *serviceType;
@property (readonly) Class superclass;

+ (id)messageItem;
+ (id)messageItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)audioMessageURL;
- (id)bundleId;
- (id)content;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)recipient;
- (id)serviceType;
- (void)setAudioMessageURL:(id)arg1;
- (void)setBundleId:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setRecipient:(id)arg1;
- (void)setServiceType:(id)arg1;

@end
