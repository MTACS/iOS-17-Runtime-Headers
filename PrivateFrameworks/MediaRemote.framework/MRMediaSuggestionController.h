
@interface MRMediaSuggestionController : NSObject <LSApplicationWorkspaceObserverProtocol> {
    _CDContextualChangeRegistration * _changeRegistration;
    _CDClientContext * _clientContext;
    <MRMediaSuggestionControllerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSMutableDictionary * _internalSuggestions;
    MRMediaSuggestionPreferences * _preferences;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _registeredForChanges;
    MRMediaSuggestionRequest * _request;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MRMediaSuggestionControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) MRMediaSuggestionRequest *request;
@property (nonatomic, readonly) NSDictionary *suggestions;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithRequest:(id)arg1;
- (id)request;
- (void)setDelegate:(id)arg1;
- (void)start;
- (void)stop;
- (id)suggestions;

@end
