
@interface ATSessionTask : NSObject <NSCopying, NSSecureCoding> {
    bool  _cancelled;
    unsigned long long  _completedItemCount;
    NSArray * _currentItemDescriptions;
    NSArray * _currentItems;
    NSString * _dataClass;
    NSError * _error;
    double  _finishTime;
    bool  _finished;
    NSString * _localizedDescription;
    double  _progress;
    NSDictionary * _properties;
    NSArray * _recentlyFailedAssets;
    bool  _running;
    ATSession * _session;
    NSString * _sessionGroupingKey;
    NSString * _sessionTaskIdentifier;
    double  _startTime;
    bool  _suspended;
    NSNumber * _totalBytesToTransfer;
    NSNumber * _totalBytesTransferred;
    unsigned long long  _totalItemCount;
}

@property (getter=isCancelled, nonatomic) bool cancelled;
@property (nonatomic) unsigned long long completedItemCount;
@property (nonatomic, copy) NSArray *currentItemDescriptions;
@property (nonatomic, copy) NSArray *currentItems;
@property (nonatomic, copy) NSString *dataClass;
@property (nonatomic, readonly) double duration;
@property (nonatomic, copy) NSError *error;
@property (nonatomic) double finishTime;
@property (getter=isFinished, nonatomic) bool finished;
@property (nonatomic, copy) NSString *localizedDescription;
@property (nonatomic) double progress;
@property (nonatomic, copy) NSDictionary *properties;
@property (nonatomic, copy) NSArray *recentlyFailedAssets;
@property (getter=isRunning, nonatomic) bool running;
@property (nonatomic) ATSession *session;
@property (nonatomic, copy) NSString *sessionGroupingKey;
@property (nonatomic, copy) NSString *sessionTaskIdentifier;
@property (nonatomic) double startTime;
@property (getter=isSuspended, nonatomic) bool suspended;
@property (nonatomic, copy) NSNumber *totalBytesToTransfer;
@property (nonatomic, copy) NSNumber *totalBytesTransferred;
@property (nonatomic) unsigned long long totalItemCount;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_start;
- (id)baseClassRepresentation;
- (void)cancel;
- (unsigned long long)completedItemCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentItemDescriptions;
- (id)currentItems;
- (id)dataClass;
- (id)description;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (double)finishTime;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDataClass:(id)arg1;
- (bool)isCancelled;
- (bool)isFinished;
- (bool)isRunning;
- (bool)isSuspended;
- (id)localizedDescription;
- (double)progress;
- (id)properties;
- (id)recentlyFailedAssets;
- (id)session;
- (id)sessionGroupingKey;
- (id)sessionTaskIdentifier;
- (void)setCancelled:(bool)arg1;
- (void)setCompletedItemCount:(unsigned long long)arg1;
- (void)setCurrentItemDescriptions:(id)arg1;
- (void)setCurrentItems:(id)arg1;
- (void)setDataClass:(id)arg1;
- (void)setError:(id)arg1;
- (void)setFinishTime:(double)arg1;
- (void)setFinished:(bool)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setProgress:(double)arg1;
- (void)setProperties:(id)arg1;
- (void)setRecentlyFailedAssets:(id)arg1;
- (void)setRunning:(bool)arg1;
- (void)setSession:(id)arg1;
- (void)setSessionGroupingKey:(id)arg1;
- (void)setSessionTaskIdentifier:(id)arg1;
- (void)setStartTime:(double)arg1;
- (void)setSuspended:(bool)arg1;
- (void)setTotalBytesToTransfer:(id)arg1;
- (void)setTotalBytesTransferred:(id)arg1;
- (void)setTotalItemCount:(unsigned long long)arg1;
- (void)start;
- (double)startTime;
- (id)totalBytesToTransfer;
- (id)totalBytesTransferred;
- (unsigned long long)totalItemCount;

@end
