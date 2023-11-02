
@interface EMRepositoryObject : EMObject <EMRepositoryObject> {
    EMRepository * _repository;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) EMRepository *repository;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)repository;
- (void)setRepository:(id)arg1;

@end
