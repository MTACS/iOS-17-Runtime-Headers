
@interface HMDAccessoryBundle : HMFObject {
    HMDHAPAccessory * accessory;
    HMFObject * context;
}

@property (nonatomic, retain) HMDHAPAccessory *accessory;
@property (nonatomic, retain) HMFObject *context;

- (void).cxx_destruct;
- (id)accessory;
- (id)context;
- (id)initWithAccessory:(id)arg1 context:(id)arg2;
- (void)setAccessory:(id)arg1;
- (void)setContext:(id)arg1;

@end
