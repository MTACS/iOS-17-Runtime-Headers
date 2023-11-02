
@interface RS3DObject : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary * _beautified_parts;
    NSMutableDictionary * _boxesDict;
    NSMutableDictionary * _groups;
    NSMutableDictionary * _parts;
    void color;
    float  confidence;
    NSArray * corners_status;
    NSString * detection_source;
    NSArray * edges_status;
    NSArray * embedding2d;
    NSUUID * identifier;
    NSArray * logits;
    NSUUID * parent_id;
    bool  status;
    long long  storyLevel;
    NSString * type;
}

@property (nonatomic, readonly) NSDictionary *beautified_parts;
@property (nonatomic, readonly) NSDictionary *boxesDict;
@property (nonatomic, readonly) void color;
@property (nonatomic, readonly) float confidence;
@property (nonatomic, readonly) NSArray *corners_status;
@property (nonatomic, readonly) void dimensions;
@property (nonatomic, readonly) NSArray *edges_status;
@property (nonatomic, readonly) NSArray *embedding2d;
@property (nonatomic, readonly) NSDictionary *groups;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) NSArray *logits;
@property (nonatomic, readonly) NSUUID *parent_id;
@property (nonatomic, readonly) NSDictionary *parts;
@property (nonatomic, readonly) bool status;
@property (nonatomic, readonly) long long storyLevel;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } transform;
@property (nonatomic, readonly) NSString *type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)beautified_parts;
- (id)boxesDict;
- (void)color;
- (float)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)corners_status;
- (id)description;
- (id)dictionaryRepresentation;
- (void)dimensions;
- (id)edges_status;
- (id)embedding2d;
- (void)encodeWithCoder:(id)arg1;
- (bool)getDimension:(id)arg1 dim:(/* Warning: Unrecognized filer type: '2' using 'void*' */ void**)arg2;
- (bool)getTransform:(id)arg1 transform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)arg2;
- (id)groups;
- (bool)hasBoxesDict:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)logits;
- (id)parent_id;
- (id)parts;
- (void)rotateAlongZAxisRightHand:(float)arg1;
- (bool)status;
- (long long)storyLevel;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })transform;
- (void)translateBy;
- (id)type;

@end
