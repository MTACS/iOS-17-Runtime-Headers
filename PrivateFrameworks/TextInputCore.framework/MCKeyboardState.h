
@interface MCKeyboardState : NSObject <NSCopying> {
    bool  _isFloatingKeyboard;
    bool  _isHardwareKeyboard;
    bool  _isSplitKeyboard;
    long long  _userInterfaceIdiom;
}

@property (nonatomic, readonly) bool isFloatingKeyboard;
@property (nonatomic, readonly) bool isHardwareKeyboard;
@property (nonatomic, readonly) bool isSplitKeyboard;
@property (nonatomic, readonly) long long userInterfaceIdiom;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithUserInterfaceIdiom:(long long)arg1 isSplitKeyboard:(bool)arg2 isFloatingKeyboard:(bool)arg3 isHardwareKeyboard:(bool)arg4;
- (bool)isFloatingKeyboard;
- (bool)isHardwareKeyboard;
- (bool)isSplitKeyboard;
- (long long)userInterfaceIdiom;

@end
