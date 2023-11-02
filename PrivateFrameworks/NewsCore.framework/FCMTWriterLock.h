
@interface FCMTWriterLock : NSObject <NFLocking> {
    <NFLocking> * _underlyingLock;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithUnderlyingLock:(id)arg1;
- (void)lock;
- (void)performReadSync:(id /* block */)arg1;
- (void)performWriteSync:(id /* block */)arg1;
- (void)unlock;

@end
