
@interface SAEntryPoint : AceObject <SAAceComparable, SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *latitude;
@property (nonatomic, copy) NSNumber *longitude;
@property (readonly) Class superclass;

+ (id)entryPoint;
+ (id)entryPointWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)latitude;
- (id)longitude;
- (void)setLatitude:(id)arg1;
- (void)setLongitude:(id)arg1;

@end
