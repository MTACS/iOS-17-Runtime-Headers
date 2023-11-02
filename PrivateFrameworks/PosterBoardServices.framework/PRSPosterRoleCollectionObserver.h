
@interface PRSPosterRoleCollectionObserver : NSObject {
    id /* block */  _handler;
    bool  _needsSandboxExtensions;
    NSOrderedSet * _posterCollection;
    NSString * _role;
}

@property (copy) id /* block */ handler;
@property (nonatomic, readonly) bool needsSandboxExtensions;
@property (nonatomic, readonly) NSOrderedSet *posterCollection;
@property (nonatomic, readonly) NSString *role;

- (void).cxx_destruct;
- (id /* block */)handler;
- (id)initWithRole:(id)arg1;
- (id)initWithRole:(id)arg1 needsSandboxExtensions:(bool)arg2;
- (void)issueUpdatedState:(id)arg1;
- (bool)needsSandboxExtensions;
- (id)posterCollection;
- (id)role;
- (void)setHandler:(id /* block */)arg1;

@end
