
@interface EDActivityPersistence : NSObject {
    <EDActivityHookResponder> * _activityHookResponder;
    NSMutableDictionary * _currentActivities;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (nonatomic, retain) <EDActivityHookResponder> *activityHookResponder;

- (void).cxx_destruct;
- (id)activityHookResponder;
- (void)activityWithID:(id)arg1 finishedWithError:(id)arg2;
- (void)activityWithID:(id)arg1 setCompletedCount:(long long)arg2 totalCount:(long long)arg3;
- (void)activityWithID:(id)arg1 setUserInfoObject:(id)arg2 forKey:(id)arg3;
- (id)currentActivities;
- (id)initWithHookResponder:(id)arg1;
- (void)setActivityHookResponder:(id)arg1;
- (id)startActivityOfType:(long long)arg1 userInfo:(id)arg2;

@end
