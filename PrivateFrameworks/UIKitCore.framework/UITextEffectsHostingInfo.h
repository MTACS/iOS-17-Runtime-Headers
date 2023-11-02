
@interface UITextEffectsHostingInfo : NSObject <_UICanvasBasedObject> {
    unsigned long long  _hostedUseCount;
    NSDictionary * _perSceneOptions;
    UIWindowScene * _scene;
}

@property (readonly) UIWindowScene *_intendedCanvas;
@property (readonly) NSDictionary *_options;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDictionary *perSceneOptions;
@property (nonatomic, retain) UIWindowScene *scene;
@property (readonly) Class superclass;
@property (nonatomic) bool useHostedInstance;

+ (id)hostingInfoForWindowScene:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithCanvas:(id)arg1 options:(id)arg2;
- (id)_intendedCanvas;
- (bool)_matchingOptions:(id)arg1;
- (id)_options;
- (id)perSceneOptions;
- (id)scene;
- (void)setPerSceneOptions:(id)arg1;
- (void)setScene:(id)arg1;
- (void)setUseHostedInstance:(bool)arg1;
- (bool)useHostedInstance;

@end
