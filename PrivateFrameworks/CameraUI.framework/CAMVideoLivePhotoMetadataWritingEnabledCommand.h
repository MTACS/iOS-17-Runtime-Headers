
@interface CAMVideoLivePhotoMetadataWritingEnabledCommand : CAMCaptureCommand {
    bool  __livePhotoMetadataWritingEnabled;
}

@property (getter=isLivePhotoMetadataWritingEnabled, nonatomic, readonly) bool _livePhotoMetadataWritingEnabled;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEnabled:(bool)arg1;
- (bool)isLivePhotoMetadataWritingEnabled;

@end
