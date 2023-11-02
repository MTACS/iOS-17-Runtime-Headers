
@interface FBProcessState : NSObject <BSDescriptionProviding, NSCopying> {
    bool  _debugging;
    bool  _foreground;
    int  _pid;
    bool  _running;
    long long  _taskState;
    long long  _visibility;
}

@property (readonly, copy) NSString *debugDescription;
@property (getter=isDebugging, nonatomic) bool debugging;
@property (readonly, copy) NSString *description;
@property (getter=isForeground, nonatomic, readonly) bool foreground;
@property (readonly) unsigned long long hash;
@property (nonatomic) int pid;
@property (getter=isRunning, nonatomic, readonly) bool running;
@property (readonly) Class superclass;
@property (nonatomic) long long taskState;
@property (nonatomic) long long visibility;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (id)initWithPid:(int)arg1;
- (bool)isDebugging;
- (bool)isEqual:(id)arg1;
- (bool)isForeground;
- (bool)isRunning;
- (int)pid;
- (void)setDebugging:(bool)arg1;
- (void)setPid:(int)arg1;
- (void)setTaskState:(long long)arg1;
- (void)setVisibility:(long long)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (long long)taskState;
- (long long)visibility;

@end
