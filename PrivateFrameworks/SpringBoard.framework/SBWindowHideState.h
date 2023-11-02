
@interface SBWindowHideState : NSObject {
    double  _desiredAlpha;
    bool  _hidden;
}

@property double desiredAlpha;
@property (getter=isHidden) bool hidden;

- (id)description;
- (double)desiredAlpha;
- (bool)isHidden;
- (void)setDesiredAlpha:(double)arg1;
- (void)setHidden:(bool)arg1;

@end
