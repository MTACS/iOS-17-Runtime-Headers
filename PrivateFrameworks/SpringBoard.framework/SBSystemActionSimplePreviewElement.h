
@interface SBSystemActionSimplePreviewElement : SBActivityProvidedContentElement <SBSystemApertureContextProviding> {
    UIColor * _keyColor;
}

@property (getter=isAffiliatedWithSessionMonitor, nonatomic, readonly) bool affiliatedWithSessionMonitor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIColor *keyColor;
@property (nonatomic, readonly) bool preventsSwipeToHide;
@property (nonatomic, readonly) FBScene *scene;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)keyColor;

@end
