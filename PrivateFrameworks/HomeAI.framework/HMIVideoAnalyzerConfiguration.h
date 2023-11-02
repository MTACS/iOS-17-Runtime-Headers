
@interface HMIVideoAnalyzerConfiguration : HMFObject <HMFLogging, NSCopying, NSSecureCoding> {
    bool  _allowReducedConfiguration;
    double  _analysisFPS;
    HMICamera * _camera;
    long long  _decodeMode;
    bool  _enableTemporalEventFiltering;
    NSUUID * _homeUUID;
    double  _maxFragmentAnalysisDuration;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _maxFragmentDuration;
    double  _minFrameQuality;
    double  _minFrameScale;
    long long  _packageClassifierMode;
    bool  _passthroughAudio;
    bool  _redactFrames;
    bool  _saveAnalyzerResultsToDisk;
    unsigned long long  _thumbnailHeight;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _thumbnailInterval;
    unsigned int  _timelapseCodecType;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _timelapseInterval;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _timelapsePreferredFragmentDuration;
    bool  _transcode;
    unsigned int  _transcodeCodecType;
}

@property bool allowReducedConfiguration;
@property double analysisFPS;
@property (retain) HMICamera *camera;
@property (readonly, copy) NSString *debugDescription;
@property long long decodeMode;
@property (readonly, copy) NSString *description;
@property bool enableTemporalEventFiltering;
@property (readonly) unsigned long long hash;
@property (retain) NSUUID *homeUUID;
@property double maxFragmentAnalysisDuration;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } maxFragmentDuration;
@property double minFrameQuality;
@property double minFrameScale;
@property long long packageClassifierMode;
@property bool passthroughAudio;
@property bool redactFrames;
@property bool saveAnalyzerResultsToDisk;
@property (readonly) Class superclass;
@property unsigned long long thumbnailHeight;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } thumbnailInterval;
@property unsigned int timelapseCodecType;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } timelapseInterval;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } timelapsePreferredFragmentDuration;
@property bool transcode;
@property unsigned int transcodeCodecType;

+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowReducedConfiguration;
- (double)analysisFPS;
- (id)attributeDescriptions;
- (id)camera;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)decodeMode;
- (bool)enableTemporalEventFiltering;
- (void)encodeWithCoder:(id)arg1;
- (id)homeUUID;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (double)maxFragmentAnalysisDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maxFragmentDuration;
- (double)minFrameQuality;
- (double)minFrameScale;
- (long long)packageClassifierMode;
- (bool)passthroughAudio;
- (bool)redactFrames;
- (bool)saveAnalyzerResultsToDisk;
- (void)setAllowReducedConfiguration:(bool)arg1;
- (void)setAnalysisFPS:(double)arg1;
- (void)setCamera:(id)arg1;
- (void)setDecodeMode:(long long)arg1;
- (void)setEnableTemporalEventFiltering:(bool)arg1;
- (void)setHomeUUID:(id)arg1;
- (void)setMaxFragmentAnalysisDuration:(double)arg1;
- (void)setMaxFragmentDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMinFrameQuality:(double)arg1;
- (void)setMinFrameScale:(double)arg1;
- (void)setPackageClassifierMode:(long long)arg1;
- (void)setPassthroughAudio:(bool)arg1;
- (void)setRedactFrames:(bool)arg1;
- (void)setSaveAnalyzerResultsToDisk:(bool)arg1;
- (void)setThumbnailHeight:(unsigned long long)arg1;
- (void)setThumbnailInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setTimelapseCodecType:(unsigned int)arg1;
- (void)setTimelapseInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setTimelapsePreferredFragmentDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setTimelapseVideo:(bool)arg1;
- (void)setTimelapseVideoPreferredFragmentDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setTranscode:(bool)arg1;
- (void)setTranscodeCodecType:(unsigned int)arg1;
- (unsigned long long)thumbnailHeight;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })thumbnailInterval;
- (unsigned int)timelapseCodecType;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timelapseInterval;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timelapsePreferredFragmentDuration;
- (bool)timelapseVideo;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timelapseVideoPreferredFragmentDuration;
- (bool)transcode;
- (unsigned int)transcodeCodecType;

@end
