
@interface PXDisplayAssetVideoContentDeliveryStrategy : NSObject <NSCopying> {
    bool  _isAudioAllowed;
    bool  _isNetworkAccessAllowed;
    bool  _isStreamingAllowed;
    long long  _quality;
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
    }  _segmentTimeRange;
    struct CGSize { 
        double width; 
        double height; 
    }  _targetSize;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic) bool isAudioAllowed;
@property (nonatomic) bool isNetworkAccessAllowed;
@property (nonatomic) bool isStreamingAllowed;
@property (nonatomic) long long quality;
@property (nonatomic) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } segmentTimeRange;
@property (nonatomic) struct CGSize { double x1; double x2; } targetSize;

+ (id)defaultStreamingMediumQualityStrategy;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)identifier;
- (id)init;
- (bool)isAudioAllowed;
- (bool)isNetworkAccessAllowed;
- (bool)isStreamingAllowed;
- (long long)quality;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })segmentTimeRange;
- (void)setIsAudioAllowed:(bool)arg1;
- (void)setIsNetworkAccessAllowed:(bool)arg1;
- (void)setIsStreamingAllowed:(bool)arg1;
- (void)setQuality:(long long)arg1;
- (void)setSegmentTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)setTargetSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })targetSize;

@end
