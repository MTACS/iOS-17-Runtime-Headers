
@interface _UIEventSessionTapAction : _UIEventSessionAction {
    struct CGPoint { 
        double x; 
        double y; 
    }  _buttonLocation;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } buttonLocation;

- (long long)actionType;
- (struct CGPoint { double x1; double x2; })buttonLocation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)setButtonLocation:(struct CGPoint { double x1; double x2; })arg1;
- (id)typeEncoding;

@end
