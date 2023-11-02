
@interface UITextIndirectKeyboardInteraction : UITextInteraction {
    bool  _disableTouchesForGestures;
}

@property (nonatomic) bool disableTouchesForGestures;

- (bool)disableTouchesForGestures;
- (id)initWithView:(id)arg1;
- (void)setDisableTouchesForGestures:(bool)arg1;

@end
