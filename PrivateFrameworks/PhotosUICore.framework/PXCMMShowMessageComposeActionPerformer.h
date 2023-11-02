
@interface PXCMMShowMessageComposeActionPerformer : PXCMMActionPerformer {
    NSURL * _shareURL;
}

@property (nonatomic, readonly) NSURL *shareURL;

- (void).cxx_destruct;
- (id)performActionWithSession:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)performMessageComposeActionWithSession:(id)arg1 shareURL:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)shareURL;

@end
