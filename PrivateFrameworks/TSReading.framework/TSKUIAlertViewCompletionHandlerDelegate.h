
@interface TSKUIAlertViewCompletionHandlerDelegate : NSObject <UIAlertViewDelegate> {
    id /* block */  mCompletionHandler;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (id /* block */)completionHandler;
- (void)dealloc;
- (void)setCompletionHandler:(id /* block */)arg1;

@end
