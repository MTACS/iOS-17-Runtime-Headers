
@interface UIKeyboardSuggestedInputMode : UIKeyboardInputMode {
    bool  enabled;
}

@property (nonatomic) bool enabled;

- (id)description;
- (bool)enabled;
- (id)initWithIdentifier:(id)arg1 enabled:(bool)arg2;
- (void)setEnabled:(bool)arg1;

@end
