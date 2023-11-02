
@interface SRSTState : NSObject {
    _SRSTState * _underlyingObject;
}

@property (nonatomic, readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *name;
@property (readonly) _SRSTState *underlyingObject;

+ (id)analyzing;
+ (id)available;
+ (id)disabled;
+ (id)new;
+ (id)postResponse;
+ (id)processing;
+ (id)responding;
+ (id)resting;
+ (id)understanding;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)initWithUnderlyingObject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)makeProxy;
- (id)name;
- (id)underlyingObject;

@end
