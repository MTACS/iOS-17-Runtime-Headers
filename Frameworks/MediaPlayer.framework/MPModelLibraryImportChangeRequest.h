
@interface MPModelLibraryImportChangeRequest : NSObject <NSCopying> {
    MPSectionedCollection * _modelObjects;
    MPModelObject * _referralObject;
    bool  _shouldLibraryAdd;
}

@property (nonatomic, copy) MPSectionedCollection *modelObjects;
@property (nonatomic, copy) MPModelObject *referralObject;
@property (nonatomic) bool shouldLibraryAdd;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)modelObjects;
- (id)newOperationWithResponseHandler:(id /* block */)arg1;
- (void)performWithResponseHandler:(id /* block */)arg1;
- (id)referralObject;
- (void)resultsWithCompletion:(id /* block */)arg1;
- (void)setModelObjects:(id)arg1;
- (void)setReferralObject:(id)arg1;
- (void)setShouldLibraryAdd:(bool)arg1;
- (bool)shouldLibraryAdd;

@end
