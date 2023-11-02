
@interface _UIFocusMovementInfo : NSObject <BSXPCCoding, NSCopying> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _fallbackMovementOriginatingFrame;
    long long  _groupFilter;
    unsigned long long  _heading;
    unsigned long long  _inputType;
    bool  _isInitialMovement;
    bool  _isVelocityBased;
    unsigned long long  _linearHeading;
    bool  _looping;
    bool  _shouldLoadScrollableContainer;
    struct CGVector { 
        double dx; 
        double dy; 
    }  _velocity;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=_fallbackMovementOriginatingFrame, setter=_setFallbackMovementOriginatingFrame:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } fallbackMovementOriginatingFrame;
@property (getter=_groupFilter, setter=_setGroupFilter:, nonatomic) long long groupFilter;
@property (readonly) unsigned long long hash;
@property (setter=_setHeading:, nonatomic) unsigned long long heading;
@property (getter=_inputType, setter=_setInputType:, nonatomic) unsigned long long inputType;
@property (getter=_isInitialMovement, setter=_setIsInitialMovement:, nonatomic) bool isInitialMovement;
@property (getter=_isVelocityBased, setter=_setIsVelocityBased:, nonatomic) bool isVelocityBased;
@property (getter=_linearHeading, setter=_setLinearHeading:, nonatomic) unsigned long long linearHeading;
@property (getter=_isLooping, setter=_setLooping:, nonatomic) bool looping;
@property (getter=_shouldLoadScrollableContainer, setter=_setShouldLoadScrollableContainer:, nonatomic) bool shouldLoadScrollableContainer;
@property (readonly) Class superclass;
@property (getter=_velocity, setter=_setVelocity:, nonatomic) struct CGVector { double x1; double x2; } velocity;

+ (id)_movementWithHeading:(unsigned long long)arg1 isInitial:(bool)arg2;
+ (id)_movementWithHeading:(unsigned long long)arg1 isInitial:(bool)arg2 fallbackMovementOriginatingFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
+ (bool)supportsSecureCoding;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_fallbackMovementOriginatingFrame;
- (long long)_groupFilter;
- (unsigned long long)_inputType;
- (bool)_isInitialMovement;
- (bool)_isLinearMovement;
- (bool)_isLooping;
- (bool)_isVelocityBased;
- (unsigned long long)_linearHeading;
- (void)_setFallbackMovementOriginatingFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setGroupFilter:(long long)arg1;
- (void)_setHeading:(unsigned long long)arg1;
- (void)_setInputType:(unsigned long long)arg1;
- (void)_setIsInitialMovement:(bool)arg1;
- (void)_setIsVelocityBased:(bool)arg1;
- (void)_setLinearHeading:(unsigned long long)arg1;
- (void)_setLooping:(bool)arg1;
- (void)_setShouldLoadScrollableContainer:(bool)arg1;
- (void)_setVelocity:(struct CGVector { double x1; double x2; })arg1;
- (bool)_shouldLoadScrollableContainer;
- (struct CGVector { double x1; double x2; })_velocity;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned long long)heading;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithHeading:(unsigned long long)arg1 linearHeading:(unsigned long long)arg2 isInitial:(bool)arg3 shouldLoadScrollableContainer:(bool)arg4 looping:(bool)arg5 groupFilter:(long long)arg6;
- (id)initWithHeading:(unsigned long long)arg1 linearHeading:(unsigned long long)arg2 isInitial:(bool)arg3 shouldLoadScrollableContainer:(bool)arg4 looping:(bool)arg5 groupFilter:(long long)arg6 inputType:(unsigned long long)arg7;
- (id)initWithHeading:(unsigned long long)arg1 velocity:(struct CGVector { double x1; double x2; })arg2 isInitial:(bool)arg3 shouldLoadScrollableContainer:(bool)arg4 groupFilter:(long long)arg5;
- (id)initWithHeading:(unsigned long long)arg1 velocity:(struct CGVector { double x1; double x2; })arg2 isInitial:(bool)arg3 shouldLoadScrollableContainer:(bool)arg4 groupFilter:(long long)arg5 inputType:(unsigned long long)arg6;
- (id)initWithXPCDictionary:(id)arg1;

@end
