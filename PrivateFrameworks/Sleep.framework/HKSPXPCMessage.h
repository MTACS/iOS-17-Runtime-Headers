
@interface HKSPXPCMessage : NSObject <BSDescriptionProviding> {
    id /* block */  _block;
    id /* block */  _errorHandler;
    NSString * _identifier;
    unsigned long long  _options;
}

@property (nonatomic, readonly, copy) id /* block */ block;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) id /* block */ errorHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) unsigned long long options;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)block;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id /* block */)errorHandler;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 block:(id /* block */)arg2 options:(unsigned long long)arg3 errorHandler:(id /* block */)arg4;
- (unsigned long long)options;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
