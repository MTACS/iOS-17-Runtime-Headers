
@interface SUCurrentProcess : NSObject {
    void _idleTracker;
    void mock;
}

@property (nonatomic, retain) SUIdleTracker *idleTracker;

+ (id)default;

- (void).cxx_destruct;
- (id)idleTracker;
- (id)init;
- (void)setIdleTracker:(id)arg1;

@end
