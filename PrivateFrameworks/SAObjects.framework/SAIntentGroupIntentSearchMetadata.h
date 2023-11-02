
@interface SAIntentGroupIntentSearchMetadata : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *jsonData;
@property (nonatomic, copy) NSString *metadataType;
@property (readonly) Class superclass;
@property (nonatomic) long long version;

+ (id)intentSearchMetadata;
+ (id)intentSearchMetadataWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)jsonData;
- (id)metadataType;
- (void)setJsonData:(id)arg1;
- (void)setMetadataType:(id)arg1;
- (void)setVersion:(long long)arg1;
- (long long)version;

@end
