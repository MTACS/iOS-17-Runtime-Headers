
@interface BKSMutableHIDEventDiscreteDispatchingPredicate : BKSHIDEventDiscreteDispatchingPredicate

@property (nonatomic, copy) NSSet *descriptors;
@property (nonatomic, copy) NSSet *displays;
@property (nonatomic, copy) NSSet *senderDescriptors;

+ (id)defaultFocusPredicate;
+ (id)defaultSystemPredicate;
+ (id)new;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setDescriptors:(id)arg1;
- (void)setDisplays:(id)arg1;
- (void)setSenderDescriptors:(id)arg1;

@end
