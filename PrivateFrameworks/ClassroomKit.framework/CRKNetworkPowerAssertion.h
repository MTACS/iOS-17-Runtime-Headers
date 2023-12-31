
@interface CRKNetworkPowerAssertion : NSObject {
    unsigned long long  _count;
    NSString * _name;
    unsigned int  mPowerAssertion;
}

@property (nonatomic) unsigned long long count;
@property (nonatomic, readonly, copy) NSString *name;

+ (void)decrement;
+ (void)increment;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (unsigned long long)count;
- (void)decrement;
- (void)increment;
- (id)init;
- (id)name;
- (void)setCount:(unsigned long long)arg1;

@end
