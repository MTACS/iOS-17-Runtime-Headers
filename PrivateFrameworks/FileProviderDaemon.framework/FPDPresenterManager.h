
@interface FPDPresenterManager : NSObject {
    FPDExtensionManager * _extensionManager;
    FPDFilePresenter * _frontmostPresenter;
    NSMutableDictionary * _presenters;
    NSMutableDictionary * _promisedPresenters;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  nextPromiseID;
}

@property (nonatomic, readonly) NSDictionary *presenters;

- (void).cxx_destruct;
- (void)addPresenter:(id)arg1 itemID:(id)arg2 urlHint:(id)arg3 pid:(int)arg4 promiseID:(unsigned long long)arg5;
- (void)forgetPromiseForPresenterWithID:(id)arg1 promiseID:(unsigned long long)arg2;
- (id)initWithExtensionManager:(id)arg1;
- (void)noteItemBecameFrontmost:(id)arg1 inWindow:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)presenters;
- (id)presentersForDomain:(id)arg1;
- (unsigned long long)promisePresenterWithID:(id)arg1;
- (void)removePresenter:(id)arg1;
- (void)signalPresentersForItemID:(id)arg1;

@end
