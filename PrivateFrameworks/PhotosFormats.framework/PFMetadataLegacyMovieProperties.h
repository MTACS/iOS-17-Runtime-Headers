
@interface PFMetadataLegacyMovieProperties : PFMetadataCore {
    NSDictionary * _audioVideoProperties;
}

- (void).cxx_destruct;
- (void)_enumerateTracksOfType:(unsigned int)arg1 withBlock:(id /* block */)arg2;
- (id)_firstAudioTrack;
- (id)_firstVideoTrack;
- (struct opaqueCMFormatDescription { }*)_formatDescription;
- (id)_makeDateTimeProperties;
- (id)_makeGPSProperties;
- (id)_makeGeometryProperties;
- (id)audioDataRate;
- (id)audioSampleRate;
- (id)audioTrackFormat;
- (id)audioTrackFormatFlags;
- (id)cameraMake;
- (id)cameraModel;
- (bool)configureWithMetadataPlist:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)durationTimeInterval;
- (id)initWithAVProxyData:(id)arg1 timeZoneLookup:(id)arg2;
- (id)initWithMetadataPlist:(id)arg1 timeZoneLookup:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isMovie;
- (bool)isSloMo;
- (bool)isTimelapse;
- (id)nominalFrameRate;
- (id)plistForEncoding;
- (id)software;
- (id)videoCodecName;
- (id)videoDataRate;

@end
