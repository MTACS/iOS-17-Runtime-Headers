
@interface DSSubSource : NSObject <DSSource> {
    <DSSource> * _parentSource;
    NSString * _resourceName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, retain) <DSSource> *parentSource;
@property (nonatomic, copy) NSString *resourceName;
@property (nonatomic, readonly, copy) NSArray *resourceNames;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)fetchSharedResourcesWithCompletion:(id /* block */)arg1;
- (id)init:(id)arg1 withResourceName:(id)arg2;
- (id)name;
- (id)parentSource;
- (id)resourceName;
- (void)setParentSource:(id)arg1;
- (void)setResourceName:(id)arg1;
- (void)stopAllSharingWithCompletion:(id /* block */)arg1;
- (void)stopSharing:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)stopSharingWithParticipant:(id)arg1 completion:(id /* block */)arg2;

@end
