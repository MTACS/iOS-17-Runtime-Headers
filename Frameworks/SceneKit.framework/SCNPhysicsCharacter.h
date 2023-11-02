
@interface SCNPhysicsCharacter : SCNPhysicsBehavior {
    struct btCapsuleShape { int (**x1)(); int x2; void *x3; struct btVector3 { union { float x_1_2_1[4]; } x_4_1_1; } x4; struct btVector3 { union { float x_1_2_1[4]; } x_5_1_1; } x5; float x6; float x7; int x8; } * _capsuleShape;
    struct btCharacterControllerInterface { int (**x1)(); } * _characterController;
    struct { 
        SCNPhysicsBody *characterBody; 
        struct SCNVector3 { 
            float x; 
            float y; 
            float z; 
        } direction; 
        double velocity; 
        double jumpSpeed; 
    }  _definition;
    struct btOverlapFilterCallback { int (**x1)(); } * _filterCallback;
    void * _ghostObject;
    SCNPhysicsWorld * _world;
}

@property (nonatomic) double jumpSpeed;
@property (nonatomic) double velocity;

- (void)_addToPhysicsWorld:(id)arg1 definition:(struct { unsigned char x1[296]; })arg2;
- (void)_copyDefinition:(struct { unsigned char x1[296]; }*)arg1;
- (void)_handleCreateIfNeeded:(bool)arg1;
- (void)_update;
- (void)_willRemoveFromPhysicsWorld:(id)arg1;
- (bool)canJump;
- (void)dealloc;
- (id)initWithCharacter:(id)arg1;
- (void)jump;
- (double)jumpSpeed;
- (void)setJumpSpeed:(double)arg1;
- (void)setVelocity:(double)arg1;
- (void)setWalkingDirection:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (double)velocity;

@end
