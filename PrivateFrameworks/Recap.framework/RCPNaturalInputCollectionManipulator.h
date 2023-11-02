
@interface RCPNaturalInputCollectionManipulator : NSObject <NSCopying> {
    long long  _interactionMethod;
    bool  _isOpen;
    struct CGPoint { 
        double x; 
        double y; 
    }  _location;
    long long  _sourceGroup;
    double  _zPosition;
}

@property (readonly) long long interactionMethod;
@property (readonly) bool isOpen;
@property (readonly) struct CGPoint { double x1; double x2; } location;
@property (readonly) long long sourceGroup;
@property (readonly) double zPosition;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithLocation:(struct CGPoint { double x1; double x2; })arg1 zPosition:(double)arg2 sourceGroup:(long long)arg3 interactionMethod:(long long)arg4 isOpen:(bool)arg5;
- (long long)interactionMethod;
- (bool)isOpen;
- (struct CGPoint { double x1; double x2; })location;
- (long long)sourceGroup;
- (double)zPosition;

@end
