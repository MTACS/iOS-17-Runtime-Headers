
@interface IDSSignInControllerAccountDescription : NSObject {
    id /* block */  _completion;
    NSString * _serviceName;
    NSNumber * _state;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, retain) NSString *serviceName;
@property (nonatomic, retain) NSNumber *state;

- (void).cxx_destruct;
- (id /* block */)completion;
- (id)serviceName;
- (void)setCompletion:(id /* block */)arg1;
- (void)setServiceName:(id)arg1;
- (void)setState:(id)arg1;
- (id)state;

@end
