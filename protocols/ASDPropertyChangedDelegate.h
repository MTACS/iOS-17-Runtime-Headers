
@protocol ASDPropertyChangedDelegate <NSObject>

@required

- (void)changedProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 forObject:(ASDObject *)arg2;

@end
