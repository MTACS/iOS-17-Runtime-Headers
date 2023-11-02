
@interface EMActivity : NSObject <EFLoggable, NSSecureCoding> {
    long long  _activityType;
    NSError * _error;
    NSDate * _finished;
    double  _fractionCompleted;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    EMActivityObjectID * _objectID;
    NSProgress * _progress;
    <EFCancelable> * _progressKVOCancellation;
    NSDate * _started;
    EMStatusUpdateProvider * _statusUpdateProvider;
    NSDictionary * _userInfo;
}

@property (readonly) long long activityType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSError *error;
@property (readonly) NSDate *finished;
@property (nonatomic) double fractionCompleted;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *localizedDescription;
@property (readonly) bool needsPersistentHistory;
@property (readonly) EMActivityObjectID *objectID;
@property (nonatomic, retain) NSProgress *progress;
@property (readonly) NSDate *started;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDictionary *userInfo;

+ (id)keyPathsForValuesAffectingLocalizedDescription;
+ (id)log;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_localizedDescriptionForFetchState:(long long)arg1;
- (void)_observeProgress;
- (long long)activityType;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (void)finishWithError:(id)arg1;
- (id)finished;
- (double)fractionCompleted;
- (id)initWithActivityType:(long long)arg1 userInfo:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqualToActivityWithType:(long long)arg1 userInfo:(id)arg2;
- (id)localizedDescription;
- (bool)needsPersistentHistory;
- (id)objectID;
- (id)progress;
- (void)setCompletedCount:(long long)arg1 totalCount:(long long)arg2;
- (void)setFractionCompleted:(double)arg1;
- (void)setProgress:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setUserInfoObject:(id)arg1 forKey:(id)arg2;
- (id)started;
- (id)userInfo;

@end
