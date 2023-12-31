
@interface STStorageActionTipItem : NSObject {
    NSDate * _createdDate;
    NSDate * _lastUsedDate;
    bool  _recoverable;
    long long  _size;
}

@property (retain) NSDate *createdDate;
@property (retain) NSDate *lastUsedDate;
@property (getter=isRecoverable) bool recoverable;
@property long long size;

- (void).cxx_destruct;
- (id)createdDate;
- (bool)isRecoverable;
- (id)lastUsedDate;
- (void)setCreatedDate:(id)arg1;
- (void)setLastUsedDate:(id)arg1;
- (void)setRecoverable:(bool)arg1;
- (void)setSize:(long long)arg1;
- (long long)size;

@end
