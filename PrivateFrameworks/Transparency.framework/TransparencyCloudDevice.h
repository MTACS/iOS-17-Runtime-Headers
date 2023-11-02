
@interface TransparencyCloudDevice : NSObject <NSSecureCoding> {
    KTLoggableData * _loggableData;
    NSString * _serialNumber;
    NSString * _state;
}

@property (retain) KTLoggableData *loggableData;
@property (retain) NSString *serialNumber;
@property (retain) NSString *state;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)loggableData;
- (id)serialNumber;
- (void)setLoggableData:(id)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)setState:(id)arg1;
- (id)state;

@end
