
@interface OZARPersonInfo : NSObject {
    NSValue * _boundingBox;
    NSNumber * _index;
    NSMutableDictionary * _jointTransforms;
    NSValue * _transform;
    NSValue * _worldSize;
}

@property (nonatomic, retain) NSValue *boundingBox;
@property (nonatomic, retain) NSNumber *index;
@property (nonatomic, retain) NSMutableDictionary *jointTransforms;
@property (nonatomic, retain) NSValue *transform;
@property (nonatomic, retain) NSValue *worldSize;

- (id)boundingBox;
- (void)dealloc;
- (id)index;
- (id)init;
- (id)init:(id)arg1;
- (id)jointTransforms;
- (void)setBoundingBox:(id)arg1;
- (void)setIndex:(id)arg1;
- (void)setJointTransforms:(id)arg1;
- (void)setTransform:(id)arg1;
- (void)setWorldSize:(id)arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })simdTransform;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })simdTransform:(long long)arg1;
- (id)transform;
- (id)worldSize;

@end
