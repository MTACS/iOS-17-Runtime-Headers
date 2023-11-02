
@interface HMMTRSystemCommissionerPairingManagerPairingIdentity : NSObject {
    NSNumber * _productID;
    NSString * _serialNumber;
    NSString * _setupPayload;
    NSUUID * _uuid;
    NSNumber * _vendorID;
}

@property (nonatomic, readonly) NSNumber *productID;
@property (nonatomic, readonly) NSString *serialNumber;
@property (nonatomic, readonly) NSString *setupPayload;
@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, readonly) NSNumber *vendorID;

- (void).cxx_destruct;
- (id)initWithUUID:(id)arg1 vendorID:(id)arg2 productID:(id)arg3 serialNumber:(id)arg4 setupPayload:(id)arg5;
- (bool)isEquivalentTo:(id)arg1;
- (bool)isIdentifiable;
- (id)productID;
- (id)serialNumber;
- (id)setupPayload;
- (id)uuid;
- (id)vendorID;

@end
