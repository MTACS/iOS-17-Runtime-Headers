
@interface ApplicationObserver : NSObject <LSApplicationWorkspaceObserverProtocol> {
    NSObject<ApplicationObserver> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<ApplicationObserver> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;

@end
