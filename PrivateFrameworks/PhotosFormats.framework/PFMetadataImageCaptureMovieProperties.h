
@interface PFMetadataImageCaptureMovieProperties : PFMetadataCore {
    NSDictionary * _iccMovieProperties;
}

- (void).cxx_destruct;
- (id)_makeGPSProperties;
- (bool)configureWithMetadataPlist:(id)arg1;
- (id)durationTimeInterval;
- (id)initWithImageCaptureMovieProperties:(id)arg1 contentType:(id)arg2 timeZoneLookup:(id)arg3;
- (bool)isSloMo;
- (bool)isTimelapse;
- (id)livePhotoPairingIdentifier;
- (id)originalFilenamee;
- (id)plistForEncoding;

@end
