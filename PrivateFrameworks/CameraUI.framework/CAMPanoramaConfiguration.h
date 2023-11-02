
@interface CAMPanoramaConfiguration : NSObject <NSCoding> {
    NSDictionary * __maxWidthPerDevice;
    long long  _maxWidth;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _maximumFramerate;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _minimumFramerate;
    int  _ringBufferSize;
    long long  _sampleBufferHeight;
    long long  _sampleBufferWidth;
}

@property (nonatomic, retain) NSDictionary *_maxWidthPerDevice;
@property (nonatomic, readonly) long long maxWidth;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } maximumFramerate;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } minimumFramerate;
@property (nonatomic, readonly) int ringBufferSize;
@property (nonatomic, readonly) long long sampleBufferHeight;
@property (nonatomic, readonly) long long sampleBufferWidth;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_maxWidthPerDevice;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithACTConfiguration:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)maxWidth;
- (long long)maxWidthForDevice:(long long)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maximumFramerate;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minimumFramerate;
- (int)ringBufferSize;
- (long long)sampleBufferHeight;
- (long long)sampleBufferWidth;
- (void)set_maxWidthPerDevice:(id)arg1;

@end
