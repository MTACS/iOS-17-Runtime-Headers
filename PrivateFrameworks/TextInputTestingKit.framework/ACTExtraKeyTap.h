
@interface ACTExtraKeyTap : ACTUserAction {
    struct CGPoint { 
        double x; 
        double y; 
    }  _location;
    double  _timestamp;
    UIKBTree * _touchedKey;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } location;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) UIKBTree *touchedKey;

- (void).cxx_destruct;
- (void)applyWithTyper:(id)arg1 log:(id)arg2;
- (id)description;
- (id)initWithTouchedKey:(id)arg1 location:(struct CGPoint { double x1; double x2; })arg2 timestamp:(double)arg3;
- (struct CGPoint { double x1; double x2; })location;
- (id)shortDescription;
- (double)timestamp;
- (id)touchedKey;

@end
