
@interface ARProcessMonitorStateUpdate : NSObject {
    long long  _debugState;
    bool  _isVisible;
    NSString * _name;
    int  _pid;
    long long  _taskState;
    RBSProcessStateUpdate * _update;
}

@property (nonatomic, readonly) long long debugState;
@property (nonatomic, readonly) bool isVisible;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) long long taskState;

- (void).cxx_destruct;
- (long long)debugState;
- (id)description;
- (id)initWithARProcessTaskState:(long long)arg1;
- (id)initWithRBSProcessStateUpdate:(id)arg1;
- (bool)isVisible;
- (id)name;
- (int)pid;
- (long long)taskState;

@end
