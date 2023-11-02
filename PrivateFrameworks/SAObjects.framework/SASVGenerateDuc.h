
@interface SASVGenerateDuc : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *ducFamilyId;
@property (nonatomic, copy) NSString *ducId;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDictionary *parameters;
@property (readonly) Class superclass;

+ (id)generateDuc;
+ (id)generateDucWithDictionary:(id)arg1 context:(id)arg2;

- (id)ducFamilyId;
- (id)ducId;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)parameters;
- (void)setDucFamilyId:(id)arg1;
- (void)setDucId:(id)arg1;
- (void)setParameters:(id)arg1;

@end
