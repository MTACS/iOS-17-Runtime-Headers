
@interface IKViewElementStyleFactory : NSObject {
    IKStyleFactory * _styleFactory;
    IKTemplateStyleSheet * _styleSheet;
}

@property (nonatomic, readonly, retain) IKStyleFactory *styleFactory;
@property (nonatomic, readonly) IKTemplateStyleSheet *styleSheet;

+ (id)styleFactoryWithMarkup:(id)arg1 styleSheet:(id)arg2;

- (void).cxx_destruct;
- (id)initWithMarkup:(id)arg1 styleSheet:(id)arg2;
- (void)setViewElementStylesDirty;
- (id)styleComposerForElement:(id)arg1 elementStyleOverrides:(id)arg2;
- (id)styleFactory;
- (id)styleSheet;

@end
