
@interface _UIEventSessionContextualAction : _UIEventSessionAction {
    struct CGPoint { 
        double x; 
        double y; 
    }  _originatingLocation;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } originatingLocation;

- (long long)actionType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (struct CGPoint { double x1; double x2; })originatingLocation;
- (void)setOriginatingLocation:(struct CGPoint { double x1; double x2; })arg1;
- (id)typeEncoding;

@end
