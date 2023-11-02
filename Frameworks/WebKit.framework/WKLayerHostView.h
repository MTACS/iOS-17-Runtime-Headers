
@interface WKLayerHostView : UIView {
    struct WeakObjCPtr<UIWindow> { 
        id m_weakReference; 
    }  _window;
}

@property (nonatomic) unsigned int contextID;

+ (Class)layerClass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)clipsToBounds;
- (unsigned int)contextID;
- (id)layerHost;
- (void)setContextID:(unsigned int)arg1;
- (void)willMoveToWindow:(id)arg1;
- (id)window;

@end
