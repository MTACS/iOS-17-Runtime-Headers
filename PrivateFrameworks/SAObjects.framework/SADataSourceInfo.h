
@interface SADataSourceInfo : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSString *contextIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *proximityHint;
@property (nonatomic, copy) NSString *sourceDeviceOwnership;
@property (readonly) Class superclass;

- (id)contextIdentifier;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)proximityHint;
- (void)setContextIdentifier:(id)arg1;
- (void)setProximityHint:(id)arg1;
- (void)setSourceDeviceOwnership:(id)arg1;
- (id)sourceDeviceOwnership;

@end
