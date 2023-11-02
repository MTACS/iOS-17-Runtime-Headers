
@interface ARCoachingSplineGroup : NSObject {
    struct vector<ARCoachingControlPoint, std::allocator<ARCoachingControlPoint>> { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<ARCoachingControlPoint *, std::allocator<ARCoachingControlPoint>> { 
            struct { /* ? */ } *__value_; 
        } __end_cap_; 
    }  _controlPoints;
    struct vector<unsigned short, std::allocator<unsigned short>> { 
        unsigned short *__begin_; 
        unsigned short *__end_; 
        struct __compressed_pair<unsigned short *, std::allocator<unsigned short>> { 
            unsigned short *__value_; 
        } __end_cap_; 
    }  _indices;
    struct vector<ARCoachingPatchData, std::allocator<ARCoachingPatchData>> { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<ARCoachingPatchData *, std::allocator<ARCoachingPatchData>> { 
            struct { /* ? */ } *__value_; 
        } __end_cap_; 
    }  _patchData;
}

@property (nonatomic, readonly) struct { float x1; }*controlPoints;
@property (nonatomic, readonly) unsigned short*indices;
@property (nonatomic, readonly) unsigned int numControlPoints;
@property (nonatomic, readonly) unsigned int numIndices;
@property (nonatomic, readonly) struct { }*patchData;
@property (nonatomic, readonly) unsigned int patchDataLength;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct { float x1; }*)controlPoints;
- (unsigned short*)indices;
- (id)initWithSplines:(id)arg1;
- (unsigned int)numControlPoints;
- (unsigned int)numIndices;
- (struct { }*)patchData;
- (unsigned int)patchDataLength;

@end
