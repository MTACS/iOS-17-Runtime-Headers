
@interface _SRSTState : NSObject {
    void eventHandler;
    void name;
    void parent;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *name;

+ (id)analyzing;
+ (id)available;
+ (id)disabled;
+ (id)postResponse;
+ (id)processing;
+ (id)responding;
+ (id)resting;
+ (id)understanding;

- (void).cxx_destruct;
- (id)description;
- (long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)makeProxy;
- (id)name;

@end
