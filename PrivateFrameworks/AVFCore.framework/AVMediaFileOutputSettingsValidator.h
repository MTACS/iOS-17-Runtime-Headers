
@interface AVMediaFileOutputSettingsValidator : NSObject <AVOutputSettingsValidation> {
    AVMediaFileType * _fileType;
}

@property (nonatomic, readonly) AVMediaFileType *fileType;

+ (void)initialize;
+ (id)mediaFileOutputSettingsValidatorForFileType:(id)arg1;

- (void)dealloc;
- (id)fileType;
- (id)init;
- (id)initWithFileType:(id)arg1;
- (bool)validateAudioOutputSettings:(id)arg1 reason:(id*)arg2;
- (bool)validateVideoOutputSettings:(id)arg1 reason:(id*)arg2;

@end
