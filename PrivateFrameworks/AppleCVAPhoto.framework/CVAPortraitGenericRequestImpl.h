
@interface CVAPortraitGenericRequestImpl : NSObject <CVAPortraitGenericRequest> {
    <CVABackgroundRequest> * _background;
    bool  _isTmpConfig;
    <CVALightRequest> * _light;
    <CVAPostProcessingRequest> * _post;
}

@property (retain) <CVABackgroundRequest> *background;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool isTmpConfig;
@property (retain) <CVALightRequest> *light;
@property (retain) <CVAPostProcessingRequest> *post;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)background;
- (bool)isTmpConfig;
- (id)light;
- (id)post;
- (void)setBackground:(id)arg1;
- (void)setIsTmpConfig:(bool)arg1;
- (void)setLight:(id)arg1;
- (void)setPost:(id)arg1;

@end
