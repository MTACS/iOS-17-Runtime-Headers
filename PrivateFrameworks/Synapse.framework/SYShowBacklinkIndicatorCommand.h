
@interface SYShowBacklinkIndicatorCommand : NSObject <SYShowBacklinkIndicatorCommandImpl> {
    <SYShowBacklinkIndicatorCommandImpl> * __impl;
}

@property (nonatomic, retain) <SYShowBacklinkIndicatorCommandImpl> *_impl;
@property (getter=isActive, nonatomic, readonly) bool active;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_impl;
- (id)initWithDomainIdentifiers:(id)arg1 linkIdentifiers:(id)arg2;
- (void)invalidate;
- (bool)isActive;
- (void)runWithCompletion:(id /* block */)arg1;
- (void)set_impl:(id)arg1;

@end
