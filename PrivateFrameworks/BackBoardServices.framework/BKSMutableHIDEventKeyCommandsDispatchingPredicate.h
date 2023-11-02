
@interface BKSMutableHIDEventKeyCommandsDispatchingPredicate : BKSHIDEventKeyCommandsDispatchingPredicate

@property (nonatomic, copy) NSSet *displays;
@property (nonatomic, copy) NSSet *senderDescriptors;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setDisplays:(id)arg1;
- (void)setSenderDescriptors:(id)arg1;

@end
