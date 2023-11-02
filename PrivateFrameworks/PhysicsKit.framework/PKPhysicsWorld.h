
@interface PKPhysicsWorld : NSObject <NSSecureCoding> {
    double  _accumulatedDt;
    NSMutableArray * _bodies;
    struct PKContactListener { 
        int (**_vptr$b2ContactListener)(); 
        NSMutableDictionary *_contacts; 
        <PKPhysicsContactDelegate> *_contactDelegate; 
    }  _contactListener;
    bool  _doSleep;
    struct b2Vec2 { 
        float x; 
        float y; 
    }  _gravity;
    NSMutableArray * _joints;
    NSMutableArray * _postStepBlocks;
    float  _speed;
    void * _world;
    struct PKDebugDrawPacket { 
        struct vector<PKPoint, std::allocator<PKPoint>> { 
            struct { /* ? */ } *__begin_; 
            struct { /* ? */ } *__end_; 
            struct __compressed_pair<PKPoint *, std::allocator<PKPoint>> { 
                struct { /* ? */ } *__value_; 
            } __end_cap_; 
        } _linePoints; 
        struct vector<PKDebugDrawPacket::color4, std::allocator<PKDebugDrawPacket::color4>> { 
            struct { /* ? */ } *__begin_; 
            struct { /* ? */ } *__end_; 
            struct __compressed_pair<PKDebugDrawPacket::color4 *, std::allocator<PKDebugDrawPacket::color4>> { 
                struct { /* ? */ } *__value_; 
            } __end_cap_; 
        } _colors; 
    }  drawPacket;
}

@property (nonatomic, retain) NSMutableArray *_bodies;
@property (nonatomic) bool _doSleep;
@property (nonatomic) struct b2Vec2 { float x1; float x2; } _gravity;
@property (nonatomic, readonly) void*_world;
@property (nonatomic, readonly) void*aether;
@property (nonatomic) <PKPhysicsContactDelegate> *contactDelegate;
@property (nonatomic) struct CGVector { double x1; double x2; } gravity;
@property (getter=isSettling, nonatomic, readonly) bool settling;
@property (nonatomic) double settlingAngularVelocityThreshold;
@property (nonatomic) double settlingDuration;
@property (nonatomic) double settlingLinearVelocityThreshold;
@property (nonatomic) double speed;
@property (nonatomic) double velocityThreshold;

// Image: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit

+ (bool)supportsSecureCoding;
+ (id)world;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)__init__;
- (id)_bodies;
- (bool)_doSleep;
- (struct b2Vec2 { float x1; float x2; })_gravity;
- (void)_runBlockOutsideOfTimeStep:(id /* block */)arg1;
- (void*)_world;
- (void)addBody:(id)arg1;
- (void)addField:(id)arg1;
- (void)addJoint:(id)arg1;
- (void*)aether;
- (id)bodies;
- (id)bodyAlongRayStart:(struct CGPoint { double x1; double x2; })arg1 end:(struct CGPoint { double x1; double x2; })arg2;
- (id)bodyAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)bodyInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)collisionDelegate;
- (id)contactDelegate;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)debugDraw:(float)arg1 matrix:(union _GLSKMatrix4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; float x_1_1_5; float x_1_1_6; float x_1_1_7; float x_1_1_8; float x_1_1_9; float x_1_1_10; float x_1_1_11; float x_1_1_12; float x_1_1_13; float x_1_1_14; float x_1_1_15; float x_1_1_16; } x1; float x2[16]; })arg2 showsPhysics:(bool)arg3 showsOutlineInterior:(bool)arg4 showsFields:(bool)arg5;
- (const void*)debugDrawPacket;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateBodiesAlongRayStart:(struct CGPoint { double x1; double x2; })arg1 end:(struct CGPoint { double x1; double x2; })arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateBodiesAtPoint:(struct CGPoint { double x1; double x2; })arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateBodiesInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 usingBlock:(id /* block */)arg2;
- (struct CGVector { double x1; double x2; })evalForce:(unsigned int)arg1 point:(struct CGPoint { double x1; double x2; })arg2;
- (struct CGVector { double x1; double x2; })gravity;
- (bool)hasBodies;
- (bool)hasFields;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqualToWorld:(id)arg1;
- (bool)isSettling;
- (id)joints;
- (void)removeAllBodies;
- (void)removeAllFields;
- (void)removeAllJoints;
- (void)removeBody:(id)arg1;
- (void)removeField:(id)arg1;
- (void)removeJoint:(id)arg1;
- (struct CGVector { double x1; double x2; })sampleFields:(struct CGPoint { double x1; double x2; })arg1;
- (id)sampleFields:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 categories:(unsigned int)arg2 dataSize:(struct CGSize { double x1; double x2; })arg3;
- (void)sampleFieldsAt;
- (void)setCollisionDelegate:(id)arg1;
- (void)setContactDelegate:(id)arg1;
- (void)setGravity:(struct CGVector { double x1; double x2; })arg1;
- (void)setSettlingAngularVelocityThreshold:(double)arg1;
- (void)setSettlingDuration:(double)arg1;
- (void)setSettlingLinearVelocityThreshold:(double)arg1;
- (void)setSpeed:(double)arg1;
- (void)setVelocityThreshold:(double)arg1;
- (void)set_bodies:(id)arg1;
- (void)set_doSleep:(bool)arg1;
- (void)set_gravity:(struct b2Vec2 { float x1; float x2; })arg1;
- (double)settlingAngularVelocityThreshold;
- (double)settlingDuration;
- (double)settlingLinearVelocityThreshold;
- (double)speed;
- (bool)stepWithTime:(double)arg1 velocityIterations:(unsigned long long)arg2 positionIterations:(unsigned long long)arg3;
- (double)velocityThreshold;

// Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit

- (bool)isKindOfClass:(Class)arg1;

@end
