
@interface AVTimedMetadataGroup : AVMetadataGroup <NSCopying, NSMutableCopying> {
    AVTimedMetadataGroupInternal * _priv;
}

@property (nonatomic, readonly, copy) NSArray *items;
@property (nonatomic, readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } timeRange;
@property (getter=_timedMetadataGroupInternal, nonatomic, readonly) AVTimedMetadataGroupInternal *timedMetadataGroupInternal;

- (struct opaqueCMSampleBuffer { }*)_createSerializedRepresentationWithFormatDescription:(struct opaqueCMFormatDescription { }*)arg1 error:(id*)arg2;
- (id)_timedMetadataGroupInternal;
- (struct opaqueCMFormatDescription { }*)copyFormatDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithItems:(id)arg1 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2;
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (bool)isEqual:(id)arg1;
- (id)items;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;

@end
