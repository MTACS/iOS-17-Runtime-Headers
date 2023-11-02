
@interface AFClientLite : NSObject <SVXAceCommandHandling> {
    AFCallSiteInfo * _initiationCallSiteInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (void).cxx_destruct;
- (void)_handleCommand:(id)arg1 afterCurrentRequest:(bool)arg2 isOneWay:(bool)arg3 commandHandler:(id /* block */)arg4 completion:(id /* block */)arg5;
- (void)dealloc;
- (void)handleCommand:(id)arg1 afterCurrentRequest:(bool)arg2 commandHandler:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)handleCommand:(id)arg1 commandHandler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)handleOneWayCommand:(id)arg1 commandHandler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)init;

// Image: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX

- (void)handleAceCommand:(id)arg1 reply:(id /* block */)arg2;

@end
