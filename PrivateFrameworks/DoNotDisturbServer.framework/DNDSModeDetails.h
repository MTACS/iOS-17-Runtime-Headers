
@interface DNDSModeDetails : NSObject <NSCopying> {
    unsigned long long  _interruptionSuppression;
}

@property (nonatomic, readonly) unsigned long long interruptionSuppression;

+ (id)detailsForInactiveDoNotDisturb;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithInterruptionSuppression:(unsigned long long)arg1;
- (unsigned long long)interruptionSuppression;
- (bool)isEqual:(id)arg1;
- (id)restrictedDetailsWithDetails:(id)arg1;

@end
