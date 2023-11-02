
@interface MusicKit_SoftLinking_MPModelLibraryImportChangeRequest : NSObject {
    NSArray * _modelObjects;
    MusicKit_SoftLinking_MPModelObject * _referralObject;
    NSArray * _relatedModelObjects;
    bool  _shouldLibraryAdd;
    MPModelLibraryImportChangeRequest * _underlyingLibraryImportChangeRequest;
}

@property (nonatomic, readonly) MPModelLibraryImportChangeRequest *_underlyingLibraryImportChangeRequest;
@property (nonatomic, copy) NSArray *modelObjects;
@property (nonatomic, retain) MusicKit_SoftLinking_MPModelObject *referralObject;
@property (nonatomic, copy) NSArray *relatedModelObjects;
@property (nonatomic) bool shouldLibraryAdd;

- (void).cxx_destruct;
- (id)_underlyingLibraryImportChangeRequest;
- (id)init;
- (id)modelObjects;
- (id)referralObject;
- (id)relatedModelObjects;
- (void)setModelObjects:(id)arg1;
- (void)setReferralObject:(id)arg1;
- (void)setRelatedModelObjects:(id)arg1;
- (void)setShouldLibraryAdd:(bool)arg1;
- (bool)shouldLibraryAdd;

@end
