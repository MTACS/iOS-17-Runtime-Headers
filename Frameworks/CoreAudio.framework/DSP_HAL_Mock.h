
@interface DSP_HAL_Mock : NSObject

+ (unsigned int)customPropertyCooldownMilliseconds;
+ (bool)hasTestHooks;
+ (void)setTestHooks:(void*)arg1;

- (id)createFactory:(int)arg1;

@end
