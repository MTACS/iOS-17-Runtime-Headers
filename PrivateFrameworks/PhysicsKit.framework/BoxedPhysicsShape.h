
@interface BoxedPhysicsShape : NSObject {
    NSArray * points;
    int  shapeType;
}

+ (id)boxPhysicsShape:(struct PKPhysicsShape { struct b2FixtureDef { struct b2Shape {} *x_1_1_1; void *x_1_1_2; float x_1_1_3; float x_1_1_4; float x_1_1_5; float x_1_1_6; float x_1_1_7; } x1; struct b2Fixture {} *x2; }*)arg1;

- (void).cxx_destruct;
- (struct PKPhysicsShape { struct b2FixtureDef { struct b2Shape {} *x_1_1_1; void *x_1_1_2; float x_1_1_3; float x_1_1_4; float x_1_1_5; float x_1_1_6; float x_1_1_7; } x1; struct b2Fixture {} *x2; }*)unboxShape;

@end
