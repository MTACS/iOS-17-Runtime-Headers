
@interface MPModelLibraryFavoriteEntityChangeRequest : NSObject <NSCopying> {
    bool  _isFavorite;
    MPModelObject * _modelObject;
    MPModelLibraryFavoriteEntityRequestAction * _requestAction;
}

@property (nonatomic) bool isFavorite;
@property (nonatomic, retain) MPModelObject *modelObject;
@property (nonatomic, retain) MPModelLibraryFavoriteEntityRequestAction *requestAction;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isFavorite;
- (id)modelObject;
- (id)newOperationWithResponseHandler:(id /* block */)arg1;
- (id)requestAction;
- (void)setIsFavorite:(bool)arg1;
- (void)setModelObject:(id)arg1;
- (void)setRequestAction:(id)arg1;

@end
