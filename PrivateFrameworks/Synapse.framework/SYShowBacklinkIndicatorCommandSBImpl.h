
@interface SYShowBacklinkIndicatorCommandSBImpl : NSObject <SBSSystemNotesPresentationHandleObserver, SYShowBacklinkIndicatorCommandImpl> {
    SBSSystemNotesPresentationHandle * __handle;
}

@property (nonatomic, retain) SBSSystemNotesPresentationHandle *_handle;
@property (getter=isActive, nonatomic, readonly) bool active;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_handle;
- (id)initWithDomainIdentifiers:(id)arg1 linkIdentifiers:(id)arg2;
- (void)invalidate;
- (bool)isActive;
- (void)runWithCompletion:(id /* block */)arg1;
- (void)set_handle:(id)arg1;
- (void)systemNotesPresentationHandle:(id)arg1 didChangePresentationMode:(long long)arg2;

@end
