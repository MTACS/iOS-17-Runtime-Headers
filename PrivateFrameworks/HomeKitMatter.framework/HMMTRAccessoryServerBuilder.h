
@interface HMMTRAccessoryServerBuilder : HMFObject {
    HMMTRAccessoryServer * _accessoryServer;
}

@property (nonatomic, retain) HMMTRAccessoryServer *accessoryServer;

- (void).cxx_destruct;
- (id)accessoryServer;
- (id)addService:(id)arg1;
- (id)build;
- (id)category:(id)arg1;
- (id)discriminator:(id)arg1;
- (id)identifier:(id)arg1;
- (id)initWithKeystore:(id)arg1 browser:(id)arg2;
- (id)manufacturer:(id)arg1;
- (id)model:(id)arg1;
- (id)name:(id)arg1;
- (id)nodeID:(id)arg1;
- (id)productID:(id)arg1;
- (id)productName:(id)arg1;
- (id)serialNumber:(id)arg1;
- (void)setAccessoryServer:(id)arg1;
- (id)setUpPinCode:(id)arg1;
- (id)vendorID:(id)arg1;
- (id)vendorName:(id)arg1;

@end
