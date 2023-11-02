
@interface RS3DSurface : NSObject <NSCopying, NSSecureCoding> {
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__value_"^ {}  _polygon;
    struct vector<float, std::allocator<float>> { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::allocator<float>> { 
            float *__value_; 
        } __end_cap_; 
    }  _polygonEdgeConfidence;
    struct vector<RSEdgeSideType, std::allocator<RSEdgeSideType>> { 
        BOOL *__begin_; 
        BOOL *__end_; 
        struct __compressed_pair<RSEdgeSideType *, std::allocator<RSEdgeSideType>> { 
            BOOL *__value_; 
        } __end_cap_; 
    }  _polygonEdgeSides;
    struct vector<RSEdgeStateType, std::allocator<RSEdgeStateType>> { 
        BOOL *__begin_; 
        BOOL *__end_; 
        struct __compressed_pair<RSEdgeStateType *, std::allocator<RSEdgeStateType>> { 
            BOOL *__value_; 
        } __end_cap_; 
    }  _polygonEdgeStates;
    void appearMajorViews;
    void appearPosePts;
    void color;
    float  confidence;
    float  depth;
    float  depthWeight;
    struct { 
        float confidence[4]; 
    }  edgeConfidence;
    struct { 
        BOOL states[4]; 
    }  edgeStates;
    unsigned int  groupId;
    NSUUID * identifier;
    BOOL  individualUpdate;
    bool  merged;
    unsigned long long  multiroom_all_idx;
    void normal;
    float  offset;
    NSUUID * parentIdentifier;
    int  parentWallStatus;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*corners[4]; 
    }  quad;
    bool  removed;
    unsigned long long  room_class_idx;
    unsigned long long  room_id;
    long long  storyLevel;
    unsigned char  type;
    int  wallStatus;
}

@property (nonatomic, readonly) void color;
@property (readonly) float confidence;
@property (nonatomic, readonly) void dimensions;
@property (nonatomic, readonly) struct { float x1[4]; } edgeConfidence;
@property (nonatomic, readonly) struct { BOOL x1[4]; } edgeStates;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) BOOL individualUpdate;
@property (nonatomic, readonly) NSUUID *parentIdentifier;
@property (nonatomic, readonly) const /* Warning: Unrecognized filer type: '' using 'void*' */ void**polygon;
@property (nonatomic, readonly) const float*polygonEdgeConfidence;
@property (nonatomic, readonly) const BOOL*polygonEdgeSides;
@property (nonatomic, readonly) const BOOL*polygonEdgeStates;
@property (nonatomic, readonly) unsigned long long polygonSize;
@property (readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } quad;
@property (nonatomic, readonly) long long storyLevel;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } transform;
@property (nonatomic, readonly) unsigned char type;

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)color;
- (float)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)dimensions;
- (struct { float x1[4]; })edgeConfidence;
- (struct { BOOL x1[4]; })edgeStates;
- (void)encodeWithCoder:(id)arg1;
- (bool)fillWithDictionaryRepresentation:(id)arg1;
- (unsigned int)getGroupId;
- (id)identifier;
- (BOOL)individualUpdate;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1 WithGroupId:(unsigned int)arg2;
- (id)initWithQuad:(void *)arg1 withConfidence:(void *)arg2 withColor:(void *)arg3 withGroupId:(void *)arg4 withType:(void *)arg5; // needs 5 arg types, found 4: struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }, float, unsigned int, unsigned char
- (id)parentIdentifier;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)polygon;
- (const float*)polygonEdgeConfidence;
- (const BOOL*)polygonEdgeSides;
- (const BOOL*)polygonEdgeStates;
- (unsigned long long)polygonSize;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })quad;
- (void)rotateAlongZAxisRightHand:(float)arg1;
- (long long)storyLevel;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })transform;
- (void)translateBy;
- (unsigned char)type;

@end
