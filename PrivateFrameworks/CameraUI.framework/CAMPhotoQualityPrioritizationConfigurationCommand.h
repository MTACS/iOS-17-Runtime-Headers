
@interface CAMPhotoQualityPrioritizationConfigurationCommand : CAMCaptureCommand {
    long long  __photoQualityPrioritization;
}

@property (nonatomic, readonly) long long _photoQualityPrioritization;

- (long long)_photoQualityPrioritization;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPhotoQualityPrioritization:(long long)arg1;
- (id)initWithSubcommands:(id)arg1;

@end
