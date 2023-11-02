
@interface _PXAssistantControllerDelegate : NSObject <PXAssistantControllerDelegate> {
    PXAssistantController * _assistantController;
    id /* block */  _completionHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)assistantController:(id)arg1 completedWithError:(id)arg2;
- (id)init;
- (id)initWithAssistantController:(id)arg1 completionHandler:(id /* block */)arg2;

@end
