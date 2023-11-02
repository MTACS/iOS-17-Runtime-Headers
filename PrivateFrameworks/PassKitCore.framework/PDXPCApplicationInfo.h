
@interface PDXPCApplicationInfo : NSObject {
    NSString * _displayID;
    bool  _running;
    bool  _visible;
}

@property (nonatomic, readonly) NSString *displayID;
@property (getter=isRunning, nonatomic, readonly) bool running;
@property (getter=isVisible, nonatomic, readonly) bool visible;

- (void).cxx_destruct;
- (id)displayID;
- (id)init;
- (id)initWithPID:(int)arg1;
- (bool)isRunning;
- (bool)isVisible;

@end
