
@protocol MOVStreamReaderDeprecationNominates <NSObject>

@required

- (NSArray *)getMetadataStreamsAssociatedTo:(NSString *)arg1;
- (NSArray *)getUnknownMetadataStreamsAssociatedTo:(NSString *)arg1;
- (NSArray *)grabNextMetadataOfStream:(NSString *)arg1 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg2;
- (id)initWithURL:(NSURL *)arg1 delegate:(id <MOVStreamReaderDelegate>)arg2 error:(id*)arg3;
- (id)initWithURL:(NSURL *)arg1 error:(id*)arg2;
- (bool)l010OutputFormatRAW14L016;
- (unsigned int)pixelFormatForStream:(NSString *)arg1;
- (void)setL010OutputFormatRAW14L016:(bool)arg1;

@end
