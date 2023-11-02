
@interface NTKGalleryCollection : NSObject <NTKEnumeratableFaceCollection> {
    id /* block */  _calloutName;
    <NTKGalleryCollectionDelegate> * _delegate;
    NSString * _descriptionText;
    NSString * _title;
}

@property (nonatomic, copy) id /* block */ calloutName;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NTKGalleryCollectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *descriptionText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

+ (id)_astronomyFacesForDevice:(id)arg1;
+ (id)_blackcombFacesForDevice:(id)arg1;
+ (id)_kaleidoscopeFacesForDevice:(id)arg1;
+ (id)_newFacesExcludingRestrictedForDevice:(id)arg1;
+ (id)_newFacesForDevice:(id)arg1;
+ (id)_photoFacesForDevice:(id)arg1;
+ (id)_upNextFacesForDevice:(id)arg1;
+ (id)_whistlerSubdialsFacesForDevice:(id)arg1;
+ (id)galleryCollectionsForDevice:(id)arg1;

- (void).cxx_destruct;
- (id /* block */)calloutName;
- (id)delegate;
- (id)descriptionText;
- (void)enumerateFaceNamesUsingBlock:(id /* block */)arg1;
- (id)faceAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfFace:(id)arg1;
- (unsigned long long)numberOfFaces;
- (void)setCalloutName:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDescriptionText:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
