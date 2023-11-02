
@interface SRSTSharedState : NSObject {
    _SRSTSharedState * _underlyingObject;
}

@property (nonatomic, readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *name;
@property (readonly) _SRSTSharedState *underlyingObject;

+ (id)new;
+ (id)passive;
+ (id)preparingToServe;
+ (id)serving;
+ (id)unshared;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)initWithUnderlyingObject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)makeProxy;
- (id)name;
- (id)underlyingObject;

@end
