
@interface ACTSubstituteKeyTap : ACTUserAction {
    TIPointError * _error;
    UIKBTree * _intendedKey;
    struct CGPoint { 
        double x; 
        double y; 
    }  _location;
    double  _timestamp;
    UIKBTree * _touchedKey;
}

@property (nonatomic, readonly) TIPointError *error;
@property (nonatomic, readonly) UIKBTree *intendedKey;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } location;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) UIKBTree *touchedKey;

- (void).cxx_destruct;
- (void)applyWithTyper:(id)arg1 log:(id)arg2;
- (id)description;
- (id)error;
- (id)initWithIntendedKey:(id)arg1 touchedKey:(id)arg2 error:(id)arg3 location:(struct CGPoint { double x1; double x2; })arg4 timestamp:(double)arg5;
- (id)intendedKey;
- (struct CGPoint { double x1; double x2; })location;
- (id)shortDescription;
- (double)timestamp;
- (id)touchedKey;

@end
