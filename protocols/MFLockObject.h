
@protocol MFLockObject

@required

- (id)initWithName:(NSString *)arg1 andDelegate:(id)arg2;
- (bool)isLockedByMe;

@end
