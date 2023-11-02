
@interface HMIDESMutableFloatArray : HMFObject <HMFLogging, NSCopying> {
    NSMutableData * _data;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly, retain) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) const float*floats;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) float*mutableFloats;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)add:(id)arg1;
- (void)appendArray:(id)arg1;
- (void)appendFloats:(const float*)arg1 count:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)data;
- (void)fillWithFloat:(float)arg1;
- (id)floatArrayByAdding:(id)arg1;
- (id)floatArrayByScaling:(float)arg1;
- (id)floatArrayBySubtracting:(id)arg1;
- (const float*)floats;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDataTensor:(id)arg1;
- (id)initWithFloats:(const float*)arg1 count:(unsigned long long)arg2;
- (id)initWithValue:(float)arg1 count:(unsigned long long)arg2;
- (float)l2Norm;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (float*)mutableFloats;
- (void)scale:(float)arg1;
- (void)subtract:(id)arg1;

@end
