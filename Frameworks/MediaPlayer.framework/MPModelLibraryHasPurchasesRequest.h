
@interface MPModelLibraryHasPurchasesRequest : NSObject {
    MPModelKind * _itemKind;
    MPMediaLibrary * _mediaLibrary;
    MPModelObject * _modelObject;
}

@property (nonatomic, retain) MPModelKind *itemKind;
@property (nonatomic, retain) MPMediaLibrary *mediaLibrary;
@property (nonatomic, retain) MPModelObject *modelObject;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)itemKind;
- (id)mediaLibrary;
- (id)modelObject;
- (id)newOperationWithResponseHandler:(id /* block */)arg1;
- (void)setItemKind:(id)arg1;
- (void)setMediaLibrary:(id)arg1;
- (void)setModelObject:(id)arg1;

@end
