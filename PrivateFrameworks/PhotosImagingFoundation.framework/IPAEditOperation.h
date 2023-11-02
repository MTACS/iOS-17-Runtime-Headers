
@interface IPAEditOperation : NSObject <NSCopying, NSObject>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_identifierForUUIDMap;
+ (id)_mapDispatchQueue;
+ (id)_uuidForIdentifierMap;
+ (id)operationIdentifierForUUID:(id)arg1;
+ (id)operationUUIDForIdentifier:(id)arg1;
+ (id)presetifyAdjustment:(id)arg1;

- (id)UUID;
- (id)archivalRepresentation;
- (id)autoIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)identifier;
- (id)init;
- (id)initWithOperation:(id)arg1;
- (id)initWithSettingsDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToOperation:(id)arg1;
- (id)settingsDictionary;

@end
