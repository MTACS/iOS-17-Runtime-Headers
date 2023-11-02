
@interface TPAlert : NSObject {
    id /* block */  _completion;
    struct __CFUserNotification { } * _userNotification;
}

@property (nonatomic, readonly) NSString *alternateButtonTitle;
@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, readonly) NSString *defaultButtonTitle;
@property (nonatomic, readonly) NSString *message;
@property (nonatomic, readonly) NSString *otherButtonTitle;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic) struct __CFUserNotification { }*userNotification;

- (void).cxx_destruct;
- (id)alternateButtonTitle;
- (void)alternateResponse;
- (id /* block */)completion;
- (void)dealloc;
- (id)defaultButtonTitle;
- (void)defaultResponse;
- (void)invalidate;
- (id)message;
- (id)otherButtonTitle;
- (void)otherResponse;
- (void)setCompletion:(id /* block */)arg1;
- (void)setUserNotification:(struct __CFUserNotification { }*)arg1;
- (void)show;
- (void)showOnViewController:(id)arg1;
- (id)title;
- (struct __CFUserNotification { }*)userNotification;

@end
