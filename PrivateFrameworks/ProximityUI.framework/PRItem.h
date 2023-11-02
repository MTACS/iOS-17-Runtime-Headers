
@interface PRItem : NSObject {
    bool  _isOwned;
    NSUUID * _productUUID;
    bool  _requiresLowerRangingFrequency;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) bool isOwned;
@property (nonatomic, readonly) NSUUID *productUUID;
@property (nonatomic, readonly) bool requiresLowerRangingFrequency;
@property (nonatomic, readonly) NSUUID *uuid;

+ (id)itemWithUUID:(id)arg1 productUUID:(id)arg2 isOwned:(bool)arg3;
+ (id)itemWithUUID:(id)arg1 productUUID:(id)arg2 isOwned:(bool)arg3 requiresLowerRangingFrequency:(bool)arg4;

- (void).cxx_destruct;
- (id)initWithUUID:(id)arg1 productUUID:(id)arg2 isOwned:(bool)arg3;
- (id)initWithUUID:(id)arg1 productUUID:(id)arg2 isOwned:(bool)arg3 requiresLowerRangingFrequency:(bool)arg4;
- (bool)isOwned;
- (id)productUUID;
- (bool)requiresLowerRangingFrequency;
- (id)uuid;

@end
