
@interface PAOngoingAccessIntervalState : NSObject {
    PAAccess * _access;
    long long  _retryCount;
}

@property (nonatomic, retain) PAAccess *access;
@property (nonatomic) long long retryCount;

- (void).cxx_destruct;
- (id)access;
- (id)initWithAccess:(id)arg1;
- (long long)retryCount;
- (void)setAccess:(id)arg1;
- (void)setRetryCount:(long long)arg1;

@end
