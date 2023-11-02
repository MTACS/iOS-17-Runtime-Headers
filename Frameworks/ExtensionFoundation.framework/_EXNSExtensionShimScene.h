
@interface _EXNSExtensionShimScene : NSObject <_EXScene> {
    NSExtensionContext * _context;
}

@property (retain) NSExtensionContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (retain) id delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)connectToSession:(id)arg1;
- (id)context;
- (void)dealloc;
- (id)init;
- (id)makePrincipalObjectForExtension:(id)arg1;
- (void)setContext:(id)arg1;
- (bool)shouldAcceptConnection:(id)arg1;

@end
