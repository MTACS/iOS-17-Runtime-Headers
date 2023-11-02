
@interface PKStrokePath : NSObject <NSCopying> {
    double  _cachedMaxWidth;
    bool  _didValidateTimestamps;
    bool  _hasValidTimestampData;
    unsigned long long  _immutablePointsCount;
    long long  _inputType;
    unsigned long long  _startIndex;
    struct PKStrokePathPointsPrivate { 
        struct shared_ptr<PKStrokePathPointsShared> { 
            struct PKStrokePathPointsShared {} *__ptr_; 
            struct __shared_weak_count {} *__cntrl_; 
        } constants; 
        struct vector<unsigned char, std::allocator<unsigned char>> { 
            char *__begin_; 
            char *__end_; 
            struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { 
                char *__value_; 
            } __end_cap_; 
        } pointsData; 
    }  _strokeDataPointsPrivate;
    NSUUID * _strokeDataUUID;
    struct shared_ptr<PKProtobufUnknownFields> { 
        struct PKProtobufUnknownFields {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _unknownFields;
}

@property (nonatomic, readonly) unsigned long long _immutablePointsCount;
@property (nonatomic, readonly) long long _inputType;
@property (nonatomic, readonly) unsigned long long _pointsCount;
@property (nonatomic, readonly) unsigned long long _startIndex;
@property (nonatomic, readonly) NSUUID *_strokeDataUUID;
@property (nonatomic, readonly) double _timestamp;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) bool hasValidPointTimestampData;

+ (void)_calculateOffsets:(unsigned long long*)arg1 sizes:(unsigned long long*)arg2;
+ (void)calculateOffsets;
+ (id)strokeDataFromDataArchive:(const void*)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct PKCompressedStrokePoint { struct _PKPoint { float x_1_1_1; float x_1_1_2; } x1; float x2; float x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; float x10; })_compressedPointAt:(unsigned long long)arg1;
- (void)_enumerateInterpolatedPointsInRange:(id)arg1 incrementBlock:(id /* block */)arg2 usingBlock:(id /* block */)arg3;
- (unsigned long long)_immutablePointsCount;
- (long long)_inputType;
- (unsigned int)_legacyRandomSeed;
- (double)_maxWidth;
- (struct CGPath { }*)_newPathRepresentation;
- (unsigned long long)_pointsCount;
- (unsigned long long)_startIndex;
- (id)_strokeDataUUID;
- (double)_timestamp;
- (void)_transform:(id /* block */)arg1;
- (bool)canApplyDelta:(id)arg1;
- (id)copyTransformed:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)creationDate;
- (id)dataApplying:(id)arg1;
- (struct _PKStrokePoint { double x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; })decompressedPointAt:(unsigned long long)arg1;
- (bool)deltaContainsNewInfo:(id)arg1;
- (id)deltaTo:(id)arg1;
- (id)description;
- (void)enumerateInterpolatedPointsInRange:(id)arg1 strideByDistance:(double)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateInterpolatedPointsInRange:(id)arg1 strideByParametricStep:(double)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateInterpolatedPointsInRange:(id)arg1 strideByTime:(double)arg2 usingBlock:(id /* block */)arg3;
- (bool)hasValidPointTimestampData;
- (bool)inflight;
- (id)init;
- (id)initWithControlPoints:(id)arg1 creationDate:(id)arg2;
- (id)initWithData:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 UUID:(id)arg3;
- (id)initWithDataPoints:(struct PKStrokePathPointsPrivate { struct shared_ptr<PKStrokePathPointsShared> { struct PKStrokePathPointsShared {} *x_1_1_1; struct __shared_weak_count {} *x_1_1_2; } x1; struct vector<unsigned char, std::allocator<unsigned char>> { char *x_2_1_1; char *x_2_1_2; struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { char *x_3_2_1; } x_2_1_3; } x2; })arg1 immutableCount:(unsigned long long)arg2 inputType:(long long)arg3 UUID:(id)arg4 didValidateTimestamps:(bool)arg5 hasValidTimestampData:(bool)arg6 cachedMaxWidth:(double)arg7 unknownFields:(struct shared_ptr<PKProtobufUnknownFields> { struct PKProtobufUnknownFields {} *x1; struct __shared_weak_count {} *x2; })arg8;
- (id)initWithPoints:(struct PKCompressedStrokePoint { struct _PKPoint { float x_1_1_1; float x_1_1_2; } x1; float x2; float x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; float x10; }*)arg1 count:(unsigned long long)arg2 immutableCount:(unsigned long long)arg3 inputType:(long long)arg4 timestamp:(double)arg5 UUID:(id)arg6;
- (id)initWithRawValue:(id)arg1;
- (struct CGPoint { double x1; double x2; })interpolatedLocationAt:(double)arg1;
- (id)interpolatedPointAt:(double)arg1;
- (double)interpolatedTimeoffsetAt:(double)arg1;
- (struct CGPoint { double x1; double x2; })locationAtIndex:(unsigned long long)arg1;
- (struct CGPoint { double x1; double x2; })locationOnSegment:(unsigned long long)arg1 t:(double)arg2;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (double)parametricValue:(double)arg1 offsetByDistance:(double)arg2;
- (double)parametricValue:(double)arg1 offsetByTime:(double)arg2;
- (id)pointAtIndex:(unsigned long long)arg1;
- (double)radiusAtIndex:(unsigned long long)arg1;
- (id)rawValue;
- (void)readStrokeDataFromArchive:(const void*)arg1;
- (bool)saveToDataArchive:(void*)arg1;
- (void)setLocation:(struct CGPoint { double x1; double x2; })arg1 atIndex:(unsigned long long)arg2;
- (void)setPoints:(struct PKCompressedStrokePoint { struct _PKPoint { float x_1_1_1; float x_1_1_2; } x1; float x2; float x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; float x10; }*)arg1 pointsCount:(unsigned long long)arg2 timestamp:(double)arg3;
- (void)setPointsFrom:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (double)timestampAtIndex:(unsigned long long)arg1;

@end
