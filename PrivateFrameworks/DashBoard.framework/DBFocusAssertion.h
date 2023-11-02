
@interface DBFocusAssertion : NSObject {
    NSString * _bundleID;
    NSString * _name;
    int  _pid;
    double  _priority;
    FBScene * _scene;
    long long  _type;
    UIWindow * _window;
}

@property (nonatomic, readonly, copy) NSString *bundleID;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) double priority;
@property (nonatomic, readonly) FBScene *scene;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) UIWindow *window;

- (void).cxx_destruct;
- (id)bundleID;
- (id)description;
- (id)initWithName:(id)arg1 type:(long long)arg2 priority:(double)arg3 window:(id)arg4 application:(id)arg5 pid:(int)arg6 scene:(id)arg7;
- (id)name;
- (int)pid;
- (double)priority;
- (id)scene;
- (long long)type;
- (id)window;

@end
