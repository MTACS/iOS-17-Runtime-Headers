
@interface TMLUIControlState : NSObject {
    unsigned long long  _state;
}

@property (nonatomic) unsigned long long state;

+ (bool)isControlStateClass:(id)arg1;
+ (void)registerControlState:(id)arg1 forClass:(Class)arg2;
+ (void)verifyStateProperty:(id)arg1 withClass:(Class)arg2;

- (void)setState:(unsigned long long)arg1;
- (unsigned long long)state;

@end
