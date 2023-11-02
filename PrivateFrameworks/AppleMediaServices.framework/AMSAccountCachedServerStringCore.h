
@interface AMSAccountCachedServerStringCore : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  cachedValue;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSDate *expiration;
@property (nonatomic, readonly) bool isStale;
@property (nonatomic, readonly) NSString *value;

- (void).cxx_destruct;
- (id)description;
- (id)expiration;
- (id)init;
- (bool)isStale;
- (id)value;

@end
