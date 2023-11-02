
@interface SUSpacePurgeOptions : NSObject <NSCopying, NSSecureCoding> {
    long long  _appOffloadUrgency;
    int  _cacheDeleteUrgency;
    NSObject<OS_dispatch_queue> * _completionQueue;
    bool  _enableAppOffload;
    bool  _enableCacheDelete;
    unsigned long long  _neededBytes;
}

@property (nonatomic) long long appOffloadUrgency;
@property (nonatomic) int cacheDeleteUrgency;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *completionQueue;
@property (nonatomic) bool enableAppOffload;
@property (nonatomic) bool enableCacheDelete;
@property (nonatomic) unsigned long long neededBytes;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)appOffloadUrgency;
- (int)cacheDeleteUrgency;
- (id)completionQueue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)enableAppOffload;
- (bool)enableCacheDelete;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)neededBytes;
- (void)setAppOffloadUrgency:(long long)arg1;
- (void)setCacheDeleteUrgency:(int)arg1;
- (void)setCompletionQueue:(id)arg1;
- (void)setEnableAppOffload:(bool)arg1;
- (void)setEnableCacheDelete:(bool)arg1;
- (void)setNeededBytes:(unsigned long long)arg1;

@end
