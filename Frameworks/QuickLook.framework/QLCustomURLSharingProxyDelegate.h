
@interface QLCustomURLSharingProxyDelegate : NSObject <UIDocumentInteractionControllerDelegate> {
    <UIDocumentInteractionControllerDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIDocumentInteractionControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (void)documentInteractionControllerDidDismissOptionsMenu:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
