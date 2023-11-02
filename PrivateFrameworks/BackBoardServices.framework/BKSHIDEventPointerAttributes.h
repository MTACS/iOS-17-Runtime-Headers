
@interface BKSHIDEventPointerAttributes : BKSHIDEventDigitizerAttributes {
    struct CGPoint { 
        double x; 
        double y; 
    }  _acceleratedRelativePosition;
    long long  _contextMove;
    long long  _contextType;
    long long  _fingerDownCount;
    NSArray * _hitTestContexts;
    BKSWindowServerHitTestSecurityAnalysis * _hitTestSecurityAnalysis;
    unsigned char  _pointerEdgeMask;
    unsigned short  _teleportState;
    struct CGPoint { 
        double x; 
        double y; 
    }  _unacceleratedRelativePosition;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } acceleratedRelativePosition;
@property (nonatomic) double acceleratedRelativePositionX;
@property (nonatomic) double acceleratedRelativePositionY;
@property (nonatomic) long long contextMove;
@property (nonatomic) long long contextType;
@property (nonatomic) long long fingerDownCount;
@property (nonatomic, copy) NSArray *hitTestContexts;
@property (nonatomic, retain) BKSWindowServerHitTestSecurityAnalysis *hitTestSecurityAnalysis;
@property (nonatomic) unsigned char pointerEdgeMask;
@property (nonatomic) unsigned short pointerState;
@property (nonatomic) unsigned short teleportState;
@property (nonatomic) struct CGPoint { double x1; double x2; } unacceleratedRelativePosition;
@property (nonatomic) double unacceleratedRelativePositionX;
@property (nonatomic) double unacceleratedRelativePositionY;

+ (id)protobufSchema;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })acceleratedRelativePosition;
- (double)acceleratedRelativePositionX;
- (double)acceleratedRelativePositionY;
- (void)appendDescriptionToFormatter:(id)arg1;
- (long long)contextMove;
- (long long)contextType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)fingerDownCount;
- (id)hitTestContexts;
- (id)hitTestSecurityAnalysis;
- (bool)isEqual:(id)arg1;
- (unsigned char)pointerEdgeMask;
- (unsigned short)pointerState;
- (void)setAcceleratedRelativePosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setAcceleratedRelativePositionX:(double)arg1;
- (void)setAcceleratedRelativePositionY:(double)arg1;
- (void)setContextMove:(long long)arg1;
- (void)setContextType:(long long)arg1;
- (void)setFingerDownCount:(long long)arg1;
- (void)setHitTestContexts:(id)arg1;
- (void)setHitTestSecurityAnalysis:(id)arg1;
- (void)setPointerEdgeMask:(unsigned char)arg1;
- (void)setPointerState:(unsigned short)arg1;
- (void)setTeleportState:(unsigned short)arg1;
- (void)setUnacceleratedRelativePosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setUnacceleratedRelativePositionX:(double)arg1;
- (void)setUnacceleratedRelativePositionY:(double)arg1;
- (unsigned short)teleportState;
- (struct CGPoint { double x1; double x2; })unacceleratedRelativePosition;
- (double)unacceleratedRelativePositionX;
- (double)unacceleratedRelativePositionY;

@end
