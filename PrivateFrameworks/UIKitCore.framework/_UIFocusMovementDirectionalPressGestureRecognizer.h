
@interface _UIFocusMovementDirectionalPressGestureRecognizer : _UIFocusMovementPressGestureRecognizer {
    struct { 
        unsigned int determinedPressSource : 1; 
    }  _flags;
    unsigned long long  _pressSource;
}

@property (nonatomic) unsigned long long pressSource;

- (id)_filterPressesByPressSource:(id)arg1;
- (void)configureDefaults;
- (unsigned long long)focusHeadingForPresses:(id)arg1;
- (unsigned long long)pressSource;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)reset;
- (void)setPressSource:(unsigned long long)arg1;

@end
