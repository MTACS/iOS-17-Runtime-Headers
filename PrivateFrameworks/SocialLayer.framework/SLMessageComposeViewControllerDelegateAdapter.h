
@interface SLMessageComposeViewControllerDelegateAdapter : NSObject <MFMessageComposeViewControllerDelegate> {
    id /* block */  _resultHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ resultHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (id /* block */)resultHandler;
- (void)setResultHandler:(id /* block */)arg1;

@end
