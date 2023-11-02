
@interface _FBServiceFacilityServerPendingConnection : NSObject {
    id /* block */  _completion;
    FBSServiceFacility * _facility;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, retain) FBSServiceFacility *facility;

+ (id)pendingConnectionToFacility:(id)arg1 completion:(id /* block */)arg2;

- (void).cxx_destruct;
- (id /* block */)completion;
- (id)facility;
- (id)initWithFacility:(id)arg1 completion:(id /* block */)arg2;
- (void)setCompletion:(id /* block */)arg1;
- (void)setFacility:(id)arg1;

@end
