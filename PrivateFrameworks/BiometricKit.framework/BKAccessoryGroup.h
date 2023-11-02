
@interface BKAccessoryGroup : NSObject {
    BKDevice * _device;
    NSString * _name;
    unsigned int  _type;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) BKDevice *device;
@property (nonatomic, readonly, copy) NSString *name;

- (void).cxx_destruct;
- (id)accessoriesWithError:(id*)arg1;
- (id)connectedAccessoriesWithError:(id*)arg1;
- (id)device;
- (unsigned long long)hash;
- (id)initWithServerAccessoryGroup:(id)arg1 device:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAccessoryGroup:(id)arg1;
- (bool)isEqualToServerAccessoryGroup:(id)arg1;
- (id)name;
- (id)serverAccessoryGroup;

@end
