
@interface SBWindowHideRequest : NSObject {
    NSString * _reason;
    struct SBWindowLevelRange_struct { 
        double start; 
        double end; 
    }  _windowLevelRange;
}

@property (copy) NSString *reason;
@property struct SBWindowLevelRange_struct { double x1; double x2; } windowLevelRange;

+ (id)hideRequestWithWindowLevelRange:(struct SBWindowLevelRange_struct { double x1; double x2; })arg1 reason:(id)arg2;

- (void).cxx_destruct;
- (id)description;
- (id)reason;
- (void)setReason:(id)arg1;
- (void)setWindowLevelRange:(struct SBWindowLevelRange_struct { double x1; double x2; })arg1;
- (struct SBWindowLevelRange_struct { double x1; double x2; })windowLevelRange;

@end
