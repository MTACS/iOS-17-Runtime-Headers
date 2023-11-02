
@interface ATXCachedMotion : NSObject {
    ATXMotion * _currentMotion;
    NSDate * lastUpdated;
}

@property (nonatomic, readonly, copy) ATXMotion *currentMotion;

- (void).cxx_destruct;
- (id)currentMotion;
- (id)initWithATXMotion:(id)arg1;
- (bool)isExpired;
- (void)update:(id)arg1;

@end
