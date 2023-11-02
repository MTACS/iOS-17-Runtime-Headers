
@interface HVMutableContentState : HVContentState

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithConsumers:(id)arg1 levelOfService:(unsigned char)arg2;
- (void)setConsumers:(id)arg1;
- (void)setLevelOfService:(unsigned char)arg1;

@end
