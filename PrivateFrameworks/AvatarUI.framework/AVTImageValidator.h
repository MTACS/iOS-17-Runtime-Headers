
@interface AVTImageValidator : NSObject {
    AVTImageValidatorConfiguration * _configuration;
    NSObject<OS_dispatch_queue> * _duplicateValidationQueue;
    NSMutableDictionary * _fileNameToImageHashesMap;
    NSMutableDictionary * _imageHashesToAvatarDataHashesMap;
    NSMutableDictionary * _imageHashesToFileNameMap;
    <AVTUILogger> * _logger;
}

@property (nonatomic, retain) AVTImageValidatorConfiguration *configuration;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *duplicateValidationQueue;
@property (nonatomic, retain) NSMutableDictionary *fileNameToImageHashesMap;
@property (nonatomic, retain) NSMutableDictionary *imageHashesToAvatarDataHashesMap;
@property (nonatomic, retain) NSMutableDictionary *imageHashesToFileNameMap;
@property (nonatomic, retain) <AVTUILogger> *logger;

+ (struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; })_calculateStatistics:(struct CGImage { }*)arg1 withSize:(struct CGSize { double x1; double x2; })arg2;
+ (bool)isImageValid:(id)arg1 error:(id*)arg2;
+ (id)sharedValidator;

- (void).cxx_destruct;
- (id)configuration;
- (id)duplicateValidationQueue;
- (id)fileNameToImageHashesMap;
- (id)imageHashesToAvatarDataHashesMap;
- (id)imageHashesToFileNameMap;
- (id)init;
- (id)initWithConfiguration:(id)arg1 environment:(id)arg2;
- (id)logger;
- (void)nts_addHash:(id)arg1 forKey:(id)arg2 avatarDataHash:(id)arg3;
- (void)setConfiguration:(id)arg1;
- (void)setDuplicateValidationQueue:(id)arg1;
- (void)setFileNameToImageHashesMap:(id)arg1;
- (void)setImageHashesToAvatarDataHashesMap:(id)arg1;
- (void)setImageHashesToFileNameMap:(id)arg1;
- (void)setLogger:(id)arg1;
- (bool)validateImageDataIsNotDuplicate:(id)arg1 forFileName:(id)arg2 avatarDataHash:(id)arg3;
- (bool)validateImageIsNotTransparent:(id)arg1 error:(id*)arg2;

@end
