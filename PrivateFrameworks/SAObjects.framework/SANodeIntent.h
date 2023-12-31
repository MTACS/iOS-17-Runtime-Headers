
@interface SANodeIntent : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *matchingSpans;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSArray *privacyPolicy;
@property (readonly) Class superclass;
@property (nonatomic, retain) <SAAceSerializable> *value;

+ (id)nodeIntent;
+ (id)nodeIntentWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)matchingSpans;
- (id)name;
- (id)privacyPolicy;
- (void)setMatchingSpans:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPrivacyPolicy:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
