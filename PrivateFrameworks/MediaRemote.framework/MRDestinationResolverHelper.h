
@interface MRDestinationResolverHelper : NSObject <MRDestinationResolverDelegate> {
    id /* block */  _callback;
    long long  _level;
}

@property (nonatomic, copy) id /* block */ callback;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long level;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)callback;
- (void)destinationResolver:(id)arg1 didFailWithError:(id)arg2;
- (void)destinationResolver:(id)arg1 endpointDidChange:(id)arg2;
- (void)destinationResolver:(id)arg1 originDidChange:(id)arg2;
- (void)destinationResolver:(id)arg1 playerPathDidChange:(id)arg2;
- (void)destinationResolverDestinationDidInvalidate:(id)arg1;
- (long long)level;
- (void)setCallback:(id /* block */)arg1;
- (void)setLevel:(long long)arg1;

@end
