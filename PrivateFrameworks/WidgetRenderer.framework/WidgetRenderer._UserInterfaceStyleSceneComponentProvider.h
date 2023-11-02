
@interface WidgetRenderer._UserInterfaceStyleSceneComponentProvider : NSObject <_UIWindowSceneComponentProviding> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _colorScheme;
    void _environmentSubscriber;
    void _observer;
    void _scene;
    void _traitOverrides;
}

@property (nonatomic, retain) UIScene *_scene;
@property (nonatomic, retain) UITraitCollection *_traitOverrides;

- (void).cxx_destruct;
- (id)_scene;
- (void)_sceneWillInvalidate:(id)arg1;
- (void)_setScene:(id)arg1;
- (id)_traitOverrides;
- (id)init;
- (id)initWithScene:(id)arg1;
- (void)set_traitOverrides:(id)arg1;

@end
