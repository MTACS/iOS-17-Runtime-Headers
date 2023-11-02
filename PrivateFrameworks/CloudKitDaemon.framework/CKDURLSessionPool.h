
@interface CKDURLSessionPool : NSObject {
    int  _backgroundSessionConnectionPoolLimit;
}

@property (nonatomic, readonly) int backgroundSessionConnectionPoolLimit;

+ (id)backgroundSessionConnectionPoolName;
+ (id)sharedURLSessionPool;

- (void)_updateBackgroundSessionConnectionPoolLimit;
- (int)backgroundSessionConnectionPoolLimit;
- (id)initInternal;

@end
