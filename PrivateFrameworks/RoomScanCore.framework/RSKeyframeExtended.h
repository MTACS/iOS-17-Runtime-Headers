
@interface RSKeyframeExtended : NSObject <RSKeyframe> {
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__value_"^ {}  _colors;
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__value_"^ {}  _points;
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__value_"^ {}  _pointsToWorld;
    struct vector<unsigned char __attribute__((ext_vector_type(4))), std::allocator<unsigned char __attribute__((ext_vector_type(4)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<unsigned char * __attribute__((ext_vector_type(4))), std::allocator<unsigned char __attribute__((ext_vector_type(4)))>>="__value_"^ {}  _semLabels;
    struct vector<unsigned short __attribute__((ext_vector_type(4))), std::allocator<unsigned short __attribute__((ext_vector_type(4)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<unsigned short * __attribute__((ext_vector_type(4))), std::allocator<unsigned short __attribute__((ext_vector_type(4)))>>="__value_"^ {}  _semVotes;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  cameraPose;
    unsigned int  groupId;
    NSUUID * identifier;
    double  timestamp;
}

@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } cameraPose;
@property (nonatomic, readonly) /* Warning: Unrecognized filer type: '' using 'void*' */ void**colors;
@property (nonatomic, readonly) long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int groupId;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSUUID *identifier;
@property (nonatomic, readonly) const /* Warning: Unrecognized filer type: '' using 'void*' */ void**points;
@property (nonatomic, readonly) /* Warning: Unrecognized filer type: '' using 'void*' */ void**pointsToWorld;
@property (nonatomic, readonly) const /* Warning: Unrecognized filer type: '' using 'void*' */ void**semanticLabels;
@property (nonatomic, readonly) const /* Warning: Unrecognized filer type: '' using 'void*' */ void**semanticVotes;
@property (readonly) Class superclass;
@property (nonatomic) double timestamp;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })cameraPose;
- (/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)colors;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)count;
- (void)filterOutPointsBeyondDistance:(float)arg1;
- (unsigned int)groupId;
- (id)identifier;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 withGroupId:(unsigned int)arg2;
- (id)initWithKeyframe:(id)arg1;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)points;
- (/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)pointsToWorld;
- (void)processWithVoxelize:(bool)arg1 asPythonApproach:(bool)arg2 resample:(bool)arg3 outlierRemove:(bool)arg4;
- (void)rotateAlongZAxisRightHand:(float)arg1;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)semanticLabels;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)semanticVotes;
- (void)setCameraPose:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setGroupId:(unsigned int)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPoints:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 semanticLabels:(/* Warning: Unrecognized filer type: '2' using 'void*' */ void**)arg2 semanticVotes:(/* Warning: Unrecognized filer type: '3' using 'void*' */ void**)arg3 colors:(/* Warning: Unrecognized filer type: '4' using 'void*' */ void**)arg4 count:(unsigned int)arg5;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;
- (void)translateBy;

@end
