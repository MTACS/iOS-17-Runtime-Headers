
@interface GKPolygonObstacle : GKObstacle <NSSecureCoding> {
    void * _cPolygonObstacle;
}

@property (nonatomic, readonly) unsigned long long vertexCount;

+ (id)obstacleWithPoints:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 count:(unsigned long long)arg2;
+ (bool)supportsSecureCoding;

- (void*)cPolygonObstacle;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPoints:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 count:(unsigned long long)arg2;
- (struct Obstacle { int (**x1)(); }*)obstacle;
- (void)setCPolygonObstacle:(void*)arg1;
- (void)vertexAtIndex:(unsigned long long)arg1;
- (unsigned long long)vertexCount;

@end
