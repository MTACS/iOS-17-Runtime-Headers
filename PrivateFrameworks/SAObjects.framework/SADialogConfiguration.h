
@interface SADialogConfiguration : SABaseAceObject <SAAceSerializable>

@property (nonatomic, retain) <SAAceSerializable> *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *gender;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *languageCode;
@property (readonly) Class superclass;

- (id)context;
- (id)encodedClassName;
- (id)gender;
- (id)groupIdentifier;
- (id)languageCode;
- (void)setContext:(id)arg1;
- (void)setGender:(id)arg1;
- (void)setLanguageCode:(id)arg1;

@end
