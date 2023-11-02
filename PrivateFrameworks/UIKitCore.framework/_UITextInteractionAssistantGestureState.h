
@interface _UITextInteractionAssistantGestureState : NSObject {
    bool  _hasExternalInteractions;
    bool  _isFirstResponder;
    long long  _mode;
    bool  _viewCanBecomeEditable;
    bool  _viewIsEditable;
}

@property (nonatomic) bool hasExternalInteractions;
@property (nonatomic) bool isFirstResponder;
@property (nonatomic) long long mode;
@property (nonatomic) bool viewCanBecomeEditable;
@property (nonatomic) bool viewIsEditable;

- (bool)hasExternalInteractions;
- (bool)isEqual:(id)arg1;
- (bool)isFirstResponder;
- (long long)mode;
- (void)setHasExternalInteractions:(bool)arg1;
- (void)setIsFirstResponder:(bool)arg1;
- (void)setMode:(long long)arg1;
- (void)setViewCanBecomeEditable:(bool)arg1;
- (void)setViewIsEditable:(bool)arg1;
- (bool)viewCanBecomeEditable;
- (bool)viewIsEditable;

@end
