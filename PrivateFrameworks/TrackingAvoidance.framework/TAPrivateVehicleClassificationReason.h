
@interface TAPrivateVehicleClassificationReason : NSObject {
    unsigned long long  _reason;
}

@property (nonatomic, readonly) unsigned long long reason;

- (unsigned long long)hash;
- (id)initWithReason:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)reason;

@end
