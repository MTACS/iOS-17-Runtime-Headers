
@interface MFMailMenuCommand : NSObject {
    UICommand * _command;
    long long  _menu;
}

@property (nonatomic, readonly) UICommand *command;
@property (nonatomic, readonly) long long menu;

+ (id)shortcutWithCommand:(id)arg1 menu:(long long)arg2;
+ (id)shortcutWithInput:(id)arg1 flags:(long long)arg2 repeatable:(bool)arg3 menu:(long long)arg4 action:(SEL)arg5;
+ (id)shortcutWithInput:(id)arg1 flags:(long long)arg2 repeatable:(bool)arg3 menu:(long long)arg4 action:(SEL)arg5 title:(id)arg6 plist:(id)arg7;

- (void).cxx_destruct;
- (id)command;
- (id)initWithCommand:(id)arg1 menu:(long long)arg2;
- (long long)menu;

@end
