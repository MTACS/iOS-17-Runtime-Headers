
@interface NWOutboundMessage : NWMessage

@property (nonatomic) unsigned long long expirationMilliseconds;
@property (nonatomic) double relativePriority;

- (void)addAntecedent:(id)arg1;
- (unsigned long long)expirationMilliseconds;
- (id)initWithContent:(id)arg1;
- (double)relativePriority;
- (void)setExpirationMilliseconds:(unsigned long long)arg1;
- (void)setRelativePriority:(double)arg1;

@end
