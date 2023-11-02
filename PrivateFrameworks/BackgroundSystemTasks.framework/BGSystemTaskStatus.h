
@interface BGSystemTaskStatus : NSObject {
    NSSet * _blockingReasons;
    long long  _status;
}

@property (nonatomic, readonly, copy) NSSet *blockingReasons;
@property (nonatomic, readonly) long long status;

- (void).cxx_destruct;
- (id)blockingReasons;
- (long long)status;

@end
