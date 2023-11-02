
@interface JFXARMetadataMediaReader : NSObject <JFXMediaMetadataReader> {
    JFXARMetadataMediaReaderItem * _cachedARMetadata;
    NSError * _lastDecodeError;
    <JFXMediaMetadataReader> * _reader;
    NSObject<OS_dispatch_queue> * _synchronizationQueue;
}

@property (nonatomic, retain) JFXARMetadataMediaReaderItem *cachedARMetadata;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isScrubbing;
@property (nonatomic, retain) NSError *lastDecodeError;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } readableTimeRange;
@property (nonatomic, readonly) <JFXMediaMetadataReader> *reader;
@property (nonatomic, readonly) unsigned long long signPostID;
@property (nonatomic, readonly) long long status;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *synchronizationQueue;

+ (void)initialize;

- (void).cxx_destruct;
- (id)JFX_ARMetadataFromMetadataReaderItem:(id)arg1;
- (id)arMetadataItemForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (bool)beginReading;
- (bool)beginReadingAtTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (id)cachedARMetadata;
- (id)error;
- (id)initWithMetadataReader:(id)arg1;
- (bool)isScrubbing;
- (id)lastDecodeError;
- (id)metadataForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)name;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })readableTimeRange;
- (id)reader;
- (void)setCachedARMetadata:(id)arg1;
- (void)setIsScrubbing:(bool)arg1;
- (void)setLastDecodeError:(id)arg1;
- (unsigned long long)signPostID;
- (long long)status;
- (id)synchronizationQueue;

@end
