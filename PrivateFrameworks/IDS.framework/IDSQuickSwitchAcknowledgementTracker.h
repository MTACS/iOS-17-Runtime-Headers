
@interface IDSQuickSwitchAcknowledgementTracker : NSObject {
    NSMutableSet * _delegateIdentifiers;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _delegateIdentifiersMutex;
}

@property (nonatomic, readonly) bool isAwaitingAcknowledgement;

- (void).cxx_destruct;
- (void)_accessDelegateIdentifiersInCriticalSectionWithBlock:(id /* block */)arg1;
- (id)awaitAcknowledgementFromServiceDelegate:(id)arg1;
- (void)dealloc;
- (id)identifierForServiceDelegate:(id)arg1;
- (id)init;
- (bool)isAwaitingAcknowledgement;
- (void)stopAwaitingAcknowledgementFromAllServiceDelegates;
- (void)stopAwaitingAcknowledgementFromServiceDelegateWithIdentifier:(id)arg1;

@end
