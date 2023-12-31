
@interface NTKSyncSessionMetrics : NSObject {
    unsigned long long  _bytesSent;
    unsigned long long  _changesSent;
    bool  _didSucceed;
    bool  _isResetSync;
}

@property (nonatomic) unsigned long long bytesSent;
@property (nonatomic) unsigned long long changesSent;
@property (nonatomic) bool didSucceed;
@property (nonatomic) bool isResetSync;

- (unsigned long long)bytesSent;
- (unsigned long long)changesSent;
- (bool)didSucceed;
- (bool)isResetSync;
- (void)setBytesSent:(unsigned long long)arg1;
- (void)setChangesSent:(unsigned long long)arg1;
- (void)setDidSucceed:(bool)arg1;
- (void)setIsResetSync:(bool)arg1;

@end
