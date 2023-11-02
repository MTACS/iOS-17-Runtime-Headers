
@interface BKSMutableHIDUISensorCharacteristics : BKSHIDUISensorCharacteristics

@property (nonatomic) bool hasDiscreteProximitySensor;

+ (id)new;

- (id)init;
- (void)setHasDiscreteProximitySensor:(bool)arg1;

@end
