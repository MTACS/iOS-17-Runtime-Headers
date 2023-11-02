
@interface CVALightRequestImplBase : NSObject <CVALightRequest> {
    NSDictionary * _faceKitProcessOutput;
    float  _portraitStyleStrength;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSDictionary *faceKitProcessOutput;
@property (readonly) unsigned long long hash;
@property float portraitStyleStrength;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)faceKitProcessOutput;
- (id)init;
- (float)portraitStyleStrength;
- (void)setFaceKitProcessOutput:(id)arg1;
- (void)setPortraitStyleStrength:(float)arg1;

@end
