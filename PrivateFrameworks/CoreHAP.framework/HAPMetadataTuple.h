
@interface HAPMetadataTuple : HMFObject {
    NSString * _characteristicType;
    NSString * _index;
    NSString * _serviceType;
}

@property (nonatomic, readonly) NSString *characteristicType;
@property (nonatomic, readonly) NSString *index;
@property (nonatomic, readonly) NSString *serviceType;

- (void).cxx_destruct;
- (id)characteristicType;
- (unsigned long long)hash;
- (id)index;
- (id)initWithCharacteristicType:(id)arg1 serviceType:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)serviceType;

@end
