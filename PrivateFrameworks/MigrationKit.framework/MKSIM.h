
@interface MKSIM : NSObject {
    NSString * _carrier;
    NSString * _carrierID;
    NSString * _gid1;
    NSString * _mccmnc;
    NSString * _number;
}

@property (nonatomic, retain) NSString *carrier;
@property (nonatomic, retain) NSString *carrierID;
@property (nonatomic, retain) NSString *gid1;
@property (nonatomic, retain) NSString *mccmnc;
@property (nonatomic, retain) NSString *number;

- (void).cxx_destruct;
- (id)carrier;
- (id)carrierID;
- (id)gid1;
- (id)initWithData:(id)arg1;
- (id)mccmnc;
- (id)number;
- (void)setCarrier:(id)arg1;
- (void)setCarrierID:(id)arg1;
- (void)setGid1:(id)arg1;
- (void)setMccmnc:(id)arg1;
- (void)setNumber:(id)arg1;

@end
