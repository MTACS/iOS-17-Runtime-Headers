
@interface _TVRCRapportDeviceRecord : NSObject {
    RPCompanionLinkDevice * _device;
    unsigned long long  _transports;
}

@property (nonatomic, readonly) RPCompanionLinkDevice *device;
@property (nonatomic, readonly) bool hasAvailableTransports;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long transports;

- (void).cxx_destruct;
- (unsigned long long)_transportForStatusFlag:(unsigned long long)arg1;
- (void)addTransportForStatusFlag:(unsigned long long)arg1;
- (id)description;
- (id)device;
- (bool)hasAvailableTransports;
- (id)identifier;
- (id)initWithDevice:(id)arg1;
- (id)name;
- (void)removeTransportForStatusFlag:(unsigned long long)arg1;
- (unsigned long long)transports;
- (void)updateTransportsForStatusFlags:(unsigned long long)arg1;

@end
