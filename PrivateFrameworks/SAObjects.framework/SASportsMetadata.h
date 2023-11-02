
@interface SASportsMetadata : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSNumber *average;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSNumber *selected;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *value;

+ (id)metadata;
+ (id)metadataWithDictionary:(id)arg1 context:(id)arg2;

- (id)average;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)identifier;
- (id)name;
- (id)selected;
- (void)setAverage:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSelected:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end