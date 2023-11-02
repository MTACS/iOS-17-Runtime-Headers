
@interface SGDeliveryKey : NSObject <SGEntityKey> {
    NSString * _externalIdentifier;
    unsigned long long  _provider;
    NSString * _trackingNumber;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *externalIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long provider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *trackingNumber;

+ (bool)isSupportedEntityType:(long long)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)externalIdentifier;
- (unsigned long long)hash;
- (id)initWithProvider:(unsigned long long)arg1 trackingNumber:(id)arg2;
- (id)initWithSerialized:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDeliveryKey:(id)arg1;
- (unsigned long long)provider;
- (id)serialize;
- (id)trackingNumber;

@end
