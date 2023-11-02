
@interface HFAccessoryProfileGroupItem : HFItemGroupItem <HFAccessoryProfileVendor, NSCopying> {
    NSNumber * _groupIdentifier;
    NSSet * _profiles;
    <HFCharacteristicValueSource> * _valueSource;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSNumber *groupIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSSet *profiles;
@property (nonatomic, readonly) NSSet *services;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HFCharacteristicValueSource> *valueSource;

- (void).cxx_destruct;
- (id)_buildProfileItems;
- (id)accessories;
- (id)copyWithValueSource:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)groupIdentifier;
- (id)init;
- (id)initWithProfiles:(id)arg1 groupIdentifier:(id)arg2 valueSource:(id)arg3;
- (id)profiles;
- (id)services;
- (id)valueSource;

@end
