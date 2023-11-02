
@interface _ARViewerViewController : UIViewController <ARViewerVendorProtocol> {
    <ARViewerVendorProtocol> * _arviewerDelegate;
}

@property (retain) <ARViewerVendorProtocol> *arviewerDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void).cxx_destruct;
- (id)arviewerDelegate;
- (oneway bool)isIgnoringInteractionEvents;
- (void)setArviewerDelegate:(id)arg1;
- (oneway void)setStatusBarOrientation:(long long)arg1;
- (oneway long long)statusBarOrientation;

@end
