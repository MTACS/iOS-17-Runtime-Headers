
@interface SSScreenCapturerScreenshotOptions : NSObject {
    unsigned int  _externalFlashLayerContextID;
    unsigned long long  _externalFlashLayerRenderID;
    UIImage * _preparedImage;
}

@property (nonatomic) unsigned int externalFlashLayerContextID;
@property (nonatomic) unsigned long long externalFlashLayerRenderID;
@property (nonatomic, retain) UIImage *preparedImage;

- (void).cxx_destruct;
- (unsigned int)externalFlashLayerContextID;
- (unsigned long long)externalFlashLayerRenderID;
- (id)preparedImage;
- (void)setExternalFlashLayerContextID:(unsigned int)arg1;
- (void)setExternalFlashLayerRenderID:(unsigned long long)arg1;
- (void)setPreparedImage:(id)arg1;

@end
