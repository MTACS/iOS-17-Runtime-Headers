
@interface CODiscoveryEnvelope : NSObject {
    unsigned long long  _received;
    CODiscoveryRecord * _record;
}

@property (nonatomic, readonly) unsigned long long received;
@property (nonatomic, readonly) CODiscoveryRecord *record;

+ (id)envelopeWithRecord:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithRecord:(id)arg1;
- (unsigned long long)received;
- (id)record;

@end
