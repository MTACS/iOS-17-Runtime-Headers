
@interface CUHomeKitResolvableAccessory : NSObject {
    HMAccessory * _accessory;
    NSData * _irkData;
}

@property (nonatomic, retain) HMAccessory *accessory;
@property (nonatomic, retain) NSData *irkData;

- (void).cxx_destruct;
- (id)accessory;
- (id)irkData;
- (void)setAccessory:(id)arg1;
- (void)setIrkData:(id)arg1;

@end
