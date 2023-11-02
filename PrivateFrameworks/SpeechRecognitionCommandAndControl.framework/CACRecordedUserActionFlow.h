
@interface CACRecordedUserActionFlow : NSObject <NSSecureCoding> {
    NSDictionary * _environmentSettings;
    long long  _executingTaskIndex;
    NSString * _identifier;
    bool  _isCancelled;
    bool  _isExecuting;
    NSMutableDictionary * _orignalEnvironmentSettings;
    bool  _skipNextAction;
    NSArray * _tasks;
}

@property (retain) NSString *identifier;
@property bool skipNextAction;
@property (readonly) NSArray *userActions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_configureEnvironment;
- (void)_executeNextActionWithCompletionBlock:(id /* block */)arg1;
- (void)_exitFlowWithError:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)_restoreEnvironment;
- (void)beginExecutingWithCompletionBlock:(id /* block */)arg1;
- (void)cancelExecution;
- (id)description;
- (bool)doesNextSpokenCommandMatchIdentifier:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserActions:(id)arg1;
- (id)plistDescription;
- (void)setIdentifier:(id)arg1;
- (void)setSkipNextAction:(bool)arg1;
- (bool)skipNextAction;
- (id)userActions;

@end
