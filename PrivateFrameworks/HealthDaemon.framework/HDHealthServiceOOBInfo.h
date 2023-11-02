
@interface HDHealthServiceOOBInfo : NSObject {
    NSData * _btAddress;
    NSData * _confirmationValue;
    NSData * _oobData;
    NSData * _randomValue;
}

@property (nonatomic, readonly) NSData *btAddress;
@property (nonatomic, readonly) NSData *confirmationValue;
@property (nonatomic, readonly) NSData *oobData;
@property (nonatomic, readonly) NSData *randomValue;

- (void).cxx_destruct;
- (id)btAddress;
- (id)confirmationValue;
- (id)description;
- (id)initWithOOBData:(id)arg1 btAddress:(id)arg2;
- (id)oobData;
- (id)randomValue;

@end
