
@interface OZARPlaneInfo : NSObject <NSSecureCoding> {
    NSNumber * _alignment;
    NSValue * _center;
    NSNumber * _classification;
    NSValue * _extent;
    NSUUID * _identifier;
    NSValue * _transform;
}

@property (nonatomic, retain) NSNumber *alignment;
@property (nonatomic, retain) NSValue *center;
@property (nonatomic, retain) NSNumber *classification;
@property (nonatomic, retain) NSValue *extent;
@property (nonatomic, retain) NSUUID *identifier;
@property (nonatomic, retain) NSValue *transform;

+ (id)planeListWithARFrame:(id)arg1;
+ (id)planeListWithAnchors:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)alignment;
- (id)center;
- (id)classification;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)extent;
- (id)identifier;
- (id)initWithARPlaneAnchor:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAlignment:(id)arg1;
- (void)setCenter:(id)arg1;
- (void)setClassification:(id)arg1;
- (void)setExtent:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setTransform:(id)arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })simdTransform;
- (id)transform;

@end
