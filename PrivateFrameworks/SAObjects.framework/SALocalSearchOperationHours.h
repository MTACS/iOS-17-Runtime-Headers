
@interface SALocalSearchOperationHours : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDictionary *operationPeriods;
@property (readonly) Class superclass;

+ (id)operationHours;
+ (id)operationHoursWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)operationPeriods;
- (void)setOperationPeriods:(id)arg1;

@end
