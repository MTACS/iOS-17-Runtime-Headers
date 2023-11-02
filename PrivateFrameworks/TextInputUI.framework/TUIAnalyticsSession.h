
@interface TUIAnalyticsSession : NSObject {
    bool  _sessionActive;
}

@property (getter=isSessionActive, nonatomic, readonly) bool sessionActive;

+ (id)currentInputModeIdentifier;
+ (id)preferredEventName:(id)arg1;

- (void)beginSession;
- (void)dealloc;
- (void)endSession;
- (bool)isSessionActive;

@end
