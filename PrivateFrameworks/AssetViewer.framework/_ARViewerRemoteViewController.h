
@interface _ARViewerRemoteViewController : _UIRemoteViewController <ARViewerHostProtocol> {
    <ARViewerHostProtocol> * _arviewerDelegate;
}

@property (retain) <ARViewerHostProtocol> *arviewerDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (id)arviewerDelegate;
- (oneway void)isIgnoringInteractionEvents:(id /* block */)arg1;
- (void)setArviewerDelegate:(id)arg1;
- (oneway void)setStatusBarOrientation:(long long)arg1;
- (oneway void)statusBarOrientation:(id /* block */)arg1;

@end
