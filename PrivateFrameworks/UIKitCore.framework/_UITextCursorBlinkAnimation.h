
@interface _UITextCursorBlinkAnimation : NSObject <_UITextCursorAnimation> {
    CAKeyframeAnimation * _caretBlinkAnimation;
    _UIShapeView * _cursorShapeView;
    bool  _enabled;
}

@property (nonatomic, readonly) _UIShapeView *cursorShapeView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cursorShapeView;
- (id)initWithCursorShapeView:(id)arg1;
- (bool)isEnabled;
- (void)reset;
- (void)setEnabled:(bool)arg1;

@end
