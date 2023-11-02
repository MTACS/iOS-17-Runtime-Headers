
@interface CTSMSDataType : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _ctFormat;
    NSData * _hexPdu;
    bool  _parseSMSC;
    NSNumber * _transport;
    bool  _waitForAck;
}

@property (nonatomic) NSNumber *ctFormat;
@property (nonatomic, retain) NSData *hexPdu;
@property (nonatomic) bool parseSMSC;
@property (nonatomic) NSNumber *transport;
@property (nonatomic) bool waitForAck;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)ctFormat;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)hexPdu;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCTSMSDataType:(id)arg1;
- (bool)parseSMSC;
- (void)setCtFormat:(id)arg1;
- (void)setHexPdu:(id)arg1;
- (void)setParseSMSC:(bool)arg1;
- (void)setTransport:(id)arg1;
- (void)setWaitForAck:(bool)arg1;
- (id)transport;
- (bool)waitForAck;

@end
