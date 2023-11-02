
@interface GKCircleObstacle : GKObstacle {
    struct SphericalObstacle { 
        int (**_vptr$Obstacle)(); 
        float radius; 
        struct Vec3 { 
            float x; 
            float y; 
            float z; 
        } center; 
        int _seenFrom; 
    }  _obstacle;
}

@property (nonatomic) void position;
@property (nonatomic) float radius;

+ (id)obstacleWithRadius:(float)arg1;

- (id).cxx_construct;
- (id)init;
- (id)initWithRadius:(float)arg1;
- (struct Obstacle { int (**x1)(); }*)obstacle;
- (void)position;
- (float)radius;
- (void)setPosition;
- (void)setRadius:(float)arg1;

@end
