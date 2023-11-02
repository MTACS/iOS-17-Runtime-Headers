
@interface KTDeviceStatus : NSObject <NSSecureCoding> {
    KTIDMSDevice * _idms;
    KTLoggableData * _loggableData;
    NSError * _loggableDataError;
}

@property (retain) KTIDMSDevice *idms;
@property (retain) KTLoggableData *loggableData;
@property (retain) NSError *loggableDataError;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)idms;
- (id)initWithCoder:(id)arg1;
- (id)loggableData;
- (id)loggableDataError;
- (void)setIdms:(id)arg1;
- (void)setLoggableData:(id)arg1;
- (void)setLoggableDataError:(id)arg1;

@end
