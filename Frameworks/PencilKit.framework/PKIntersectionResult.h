
@interface PKIntersectionResult : NSObject {
    long long  _contentType;
    NSOrderedSet * _intersectedStrokes;
    long long  _intersectionAlgorithmType;
}

@property (nonatomic) long long contentType;
@property (nonatomic, retain) NSOrderedSet *intersectedStrokes;
@property (nonatomic) long long intersectionAlgorithmType;

+ (id)noResult;

- (void).cxx_destruct;
- (long long)contentType;
- (id)intersectedStrokes;
- (long long)intersectionAlgorithmType;
- (void)setContentType:(long long)arg1;
- (void)setIntersectedStrokes:(id)arg1;
- (void)setIntersectionAlgorithmType:(long long)arg1;

@end
