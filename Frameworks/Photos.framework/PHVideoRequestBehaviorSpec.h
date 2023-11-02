
@interface PHVideoRequestBehaviorSpec : NSObject <NSCopying, NSSecureCoding, PLVideoChoosingOptions> {
    long long  _deliveryMode;
    long long  _downloadIntent;
    long long  _downloadPriority;
    bool  _mediumHighQualityAllowed;
    bool  _networkAccessAllowed;
    bool  _restrictToPlayableOnCurrentDevice;
    bool  _streamingAllowed;
    long long  _streamingVideoIntent;
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
    }  _timeRange;
    long long  _version;
    bool  _videoComplementAllowed;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long deliveryMode;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long downloadIntent;
@property (nonatomic) long long downloadPriority;
@property (readonly) unsigned long long hash;
@property (getter=isMediumHighQualityAllowed, nonatomic) bool mediumHighQualityAllowed;
@property (getter=isNetworkAccessAllowed, nonatomic) bool networkAccessAllowed;
@property (nonatomic) bool restrictToPlayableOnCurrentDevice;
@property (getter=isStreamingAllowed, nonatomic) bool streamingAllowed;
@property (nonatomic) long long streamingVideoIntent;
@property (readonly) Class superclass;
@property (nonatomic) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } timeRange;
@property (nonatomic) long long version;
@property (getter=isVideoComplementAllowed, nonatomic) bool videoComplementAllowed;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)deliveryMode;
- (long long)downloadIntent;
- (long long)downloadPriority;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasValidTimeRange;
- (id)initWithCoder:(id)arg1;
- (bool)isExplicitUserAction;
- (bool)isMediumHighQualityAllowed;
- (bool)isNetworkAccessAllowed;
- (bool)isStreamingAllowed;
- (bool)isVideoComplementAllowed;
- (bool)restrictToPlayableOnCurrentDevice;
- (void)setDeliveryMode:(long long)arg1;
- (void)setDownloadIntent:(long long)arg1;
- (void)setDownloadPriority:(long long)arg1;
- (void)setMediumHighQualityAllowed:(bool)arg1;
- (void)setNetworkAccessAllowed:(bool)arg1;
- (void)setRestrictToPlayableOnCurrentDevice:(bool)arg1;
- (void)setStreamingAllowed:(bool)arg1;
- (void)setStreamingVideoIntent:(long long)arg1;
- (void)setTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)setVersion:(long long)arg1;
- (void)setVideoComplementAllowed:(bool)arg1;
- (id)shortDescription;
- (bool)streamingIntentAllowsFallbackToDownload;
- (long long)streamingVideoIntent;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;
- (long long)version;
- (long long)videoDeliveryMode;
- (long long)videoVersion;

@end
