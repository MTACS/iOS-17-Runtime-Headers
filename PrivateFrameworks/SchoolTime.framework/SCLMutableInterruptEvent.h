
@interface SCLMutableInterruptEvent : SCLInterruptEvent

@property (nonatomic, copy) SCLContact *sender;
@property (nonatomic) bool shouldAlwaysInterrupt;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long urgency;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setSender:(id)arg1;
- (void)setShouldAlwaysInterrupt:(bool)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setUrgency:(unsigned long long)arg1;

@end
