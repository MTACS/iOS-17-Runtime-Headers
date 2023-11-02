
@interface MusicKit_SoftLinking_MPModelLibraryDeleteEntityChangeRequest : NSObject {
    MusicKit_SoftLinking_MPModelObject * _modelObject;
    NSArray * _relatedModelObjects;
    MPModelLibraryDeleteEntityChangeRequest * _underlyingLibraryDeleteEntityChangeRequest;
}

@property (nonatomic, readonly) MPModelLibraryDeleteEntityChangeRequest *_underlyingLibraryDeleteEntityChangeRequest;
@property (nonatomic, retain) MusicKit_SoftLinking_MPModelObject *modelObject;
@property (nonatomic, copy) NSArray *relatedModelObjects;

- (void).cxx_destruct;
- (id)_underlyingLibraryDeleteEntityChangeRequest;
- (id)init;
- (id)modelObject;
- (id)relatedModelObjects;
- (void)setModelObject:(id)arg1;
- (void)setRelatedModelObjects:(id)arg1;

@end
