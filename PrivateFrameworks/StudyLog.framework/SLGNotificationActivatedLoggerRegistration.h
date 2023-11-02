
@interface SLGNotificationActivatedLoggerRegistration : NSObject {
    int  _beginToken;
    int  _endToken;
}

@property (nonatomic) int beginToken;
@property (nonatomic) int endToken;

+ (id)registrationWithBeginToken:(int)arg1 endToken:(int)arg2;

- (int)beginToken;
- (int)endToken;
- (void)setBeginToken:(int)arg1;
- (void)setEndToken:(int)arg1;

@end
