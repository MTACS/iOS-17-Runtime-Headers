
@interface BKSHIDEventDigitizerPathAttributes : NSObject <BSDescriptionStreamable, BSProtobufSerializable, NSCopying> {
    BKSHIDEventAuthenticationMessage * _authenticationMessage;
    struct CGPoint { 
        double x; 
        double y; 
    }  _hitTestLocation;
    unsigned char  _locus;
    long long  _pathIndex;
    struct CGPoint { 
        double x; 
        double y; 
    }  _preciseLocation;
    BKSWindowServerHitTestSecurityAnalysis * _securityAnalysis;
    unsigned int  _touchIdentifier;
    unsigned int  _userIdentifier;
    float  _zGradient;
}

@property (nonatomic, retain) BKSHIDEventAuthenticationMessage *authenticationMessage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGPoint { double x1; double x2; } hitTestLocation;
@property (nonatomic) double hitTestLocationX;
@property (nonatomic) double hitTestLocationY;
@property (nonatomic) unsigned char locus;
@property (nonatomic) long long pathIndex;
@property (nonatomic) struct CGPoint { double x1; double x2; } preciseLocation;
@property (nonatomic) double preciseLocationX;
@property (nonatomic) double preciseLocationY;
@property (nonatomic, retain) BKSWindowServerHitTestSecurityAnalysis *securityAnalysis;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int touchIdentifier;
@property (nonatomic) unsigned int userIdentifier;
@property (nonatomic) float zGradient;

+ (id)protobufSchema;

- (void).cxx_destruct;
- (void)appendDescriptionToFormatter:(id)arg1;
- (id)authenticationMessage;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (struct CGPoint { double x1; double x2; })hitTestLocation;
- (double)hitTestLocationX;
- (double)hitTestLocationY;
- (bool)isEqual:(id)arg1;
- (unsigned char)locus;
- (long long)pathIndex;
- (struct CGPoint { double x1; double x2; })preciseLocation;
- (double)preciseLocationX;
- (double)preciseLocationY;
- (id)securityAnalysis;
- (void)setAuthenticationMessage:(id)arg1;
- (void)setHitTestLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setHitTestLocationX:(double)arg1;
- (void)setHitTestLocationY:(double)arg1;
- (void)setLocus:(unsigned char)arg1;
- (void)setPathIndex:(long long)arg1;
- (void)setPreciseLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPreciseLocationX:(double)arg1;
- (void)setPreciseLocationY:(double)arg1;
- (void)setSecurityAnalysis:(id)arg1;
- (void)setTouchIdentifier:(unsigned int)arg1;
- (void)setUserIdentifier:(unsigned int)arg1;
- (void)setZGradient:(float)arg1;
- (unsigned int)touchIdentifier;
- (unsigned int)userIdentifier;
- (float)zGradient;

@end
