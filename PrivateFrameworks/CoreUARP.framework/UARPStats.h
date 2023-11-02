
@interface UARPStats : NSObject {
    unsigned int  _packetsDuplicate;
    unsigned int  _packetsMissed;
    unsigned int  _packetsNoVersionAgreement;
    unsigned int  _packetsOutOfOrder;
}

@property (readonly) unsigned int packetsDuplicate;
@property (readonly) unsigned int packetsMissed;
@property (readonly) unsigned int packetsNoVersionAgreement;
@property (readonly) unsigned int packetsOutOfOrder;

- (id)initWithStatistics:(struct UARPStatistics { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)arg1;
- (unsigned int)packetsDuplicate;
- (unsigned int)packetsMissed;
- (unsigned int)packetsNoVersionAgreement;
- (unsigned int)packetsOutOfOrder;

@end
