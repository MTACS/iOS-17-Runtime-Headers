
@interface SLComposeViewControllerDelegate : NSObject <MFMessageComposeViewControllerDelegate> {
    id /* block */  _callback;
}

@property (nonatomic, readonly) id /* block */ callback;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)callback;
- (id)initWithCallback:(id /* block */)arg1;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;

@end
