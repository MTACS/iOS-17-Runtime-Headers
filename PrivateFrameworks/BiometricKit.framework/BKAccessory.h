
@interface BKAccessory : NSObject {
    BKAccessoryGroup * _accessoryGroup;
    BKDevice * _device;
    unsigned int  _flags;
    NSString * _name;
    unsigned int  _type;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) BKAccessoryGroup *accessoryGroup;
@property (nonatomic, readonly) BKDevice *device;
@property (nonatomic, readonly) bool isRemovable;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSData *uid;

- (void).cxx_destruct;
- (id)accessoryGroup;
- (id)device;
- (unsigned long long)hash;
- (id)initWithServerAccessory:(id)arg1 device:(id)arg2;
- (bool)isAuthorized:(bool*)arg1 error:(id*)arg2;
- (bool)isConnected:(bool*)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAccessory:(id)arg1;
- (bool)isEqualToServerAccessory:(id)arg1;
- (bool)isRemovable;
- (id)name;
- (id)serverAccessory;
- (id)uid;

@end
