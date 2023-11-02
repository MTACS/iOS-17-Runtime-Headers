
@interface SNAudioCorrelationResult : NSObject <SNResult, SNTimeConversionDictionaryProviding, SNTimeRangeProviding, SNTimeRangeProvidingWritable> {
    long long  _channelIndex;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _peakTime;
    double  _peakValue;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  timeRange;
}

@property (nonatomic, readonly) long long channelIndex;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } peakTime;
@property (nonatomic, readonly) double peakValue;
@property (readonly) Class superclass;
@property (readonly) NSDictionary *timeConversionDictionary;
@property (nonatomic) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } timeRange;

- (long long)channelIndex;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })peakTime;
- (double)peakValue;
- (void)setTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (id)timeConversionDictionary;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;

@end
