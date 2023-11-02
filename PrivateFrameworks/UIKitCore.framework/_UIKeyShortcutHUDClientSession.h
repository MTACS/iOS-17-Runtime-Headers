
@interface _UIKeyShortcutHUDClientSession : NSObject {
    _UIKeyShortcutHUDConfiguration * _configuration;
    bool  _textEditingSessionWasTornDown;
}

@property (nonatomic, retain) _UIKeyShortcutHUDConfiguration *configuration;
@property (nonatomic) bool textEditingSessionWasTornDown;

- (void).cxx_destruct;
- (id)configuration;
- (void)setConfiguration:(id)arg1;
- (void)setTextEditingSessionWasTornDown:(bool)arg1;
- (bool)textEditingSessionWasTornDown;

@end
