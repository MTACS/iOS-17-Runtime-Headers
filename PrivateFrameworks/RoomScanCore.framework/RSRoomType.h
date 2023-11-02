
@interface RSRoomType : NSObject <NSCopying, NSSecureCoding> {
    float  _ceilingHeight;
    float  _confidenceScore;
    float  _floorHeight;
    unsigned int  _groupId;
    int  _insideRoom;
    NSString * _label;
    RSRoomTypePolygon * _polygon;
    void _polygonCenter;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*corners[4]; 
    }  _quad;
    long long  storyLevel;
}

@property (nonatomic, readonly) float ceilingHeight;
@property (nonatomic, readonly) float confidenceScore;
@property (nonatomic, readonly) void dimensions;
@property (nonatomic, readonly) float floorHeight;
@property (nonatomic, readonly) unsigned int groupId;
@property (nonatomic, readonly) int insideRoom;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) RSRoomTypePolygon *polygon;
@property (nonatomic, readonly) void polygonCenter;
@property (readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } quad;
@property (nonatomic, readonly) long long storyLevel;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } transform;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (float)ceilingHeight;
- (float)confidenceScore;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)dimensions;
- (void)encodeWithCoder:(id)arg1;
- (float)floorHeight;
- (unsigned int)groupId;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1 withGroupId:(unsigned int)arg2;
- (int)insideRoom;
- (id)label;
- (id)polygon;
- (void)polygonCenter;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })quad;
- (void)rotateAlongZAxisRightHand:(float)arg1;
- (long long)storyLevel;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })transform;
- (void)translateBy;

@end
