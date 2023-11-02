
@interface MusicKit_SoftLinking_MPModelLibraryKeepLocalChangeRequest : NSObject {
    unsigned long long  _constraints;
    long long  _enableState;
    MusicKit_SoftLinking_MPModelObject * _modelObject;
    NSArray * _relatedModelObjects;
    MPModelLibraryKeepLocalChangeRequest * _underlyingLibraryKeepLocalChangeRequest;
}

@property (nonatomic, readonly) MPModelLibraryKeepLocalChangeRequest *_underlyingLibraryKeepLocalChangeRequest;
@property (nonatomic) unsigned long long constraints;
@property (nonatomic) long long enableState;
@property (nonatomic, retain) MusicKit_SoftLinking_MPModelObject *modelObject;
@property (nonatomic, copy) NSArray *relatedModelObjects;

- (void).cxx_destruct;
- (id)_underlyingLibraryKeepLocalChangeRequest;
- (unsigned long long)constraints;
- (long long)enableState;
- (id)init;
- (id)modelObject;
- (id)relatedModelObjects;
- (void)setConstraints:(unsigned long long)arg1;
- (void)setEnableState:(long long)arg1;
- (void)setModelObject:(id)arg1;
- (void)setRelatedModelObjects:(id)arg1;

@end
