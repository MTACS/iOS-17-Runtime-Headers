
@interface SXDocumentController : NSObject <SXDocumentShareURLProvider> {
    NSArray * _additions;
    SXJSONObjectMerger * _componentStyleMerger;
    NSMutableDictionary * _componentStyles;
    SXDocument * _document;
    SXImageController * _imageController;
    NSString * _shareURL;
}

@property (nonatomic, readonly) NSArray *additions;
@property (nonatomic, readonly) NSArray *allImageResources;
@property (nonatomic, readonly) SXJSONObjectMerger *componentStyleMerger;
@property (nonatomic, retain) NSMutableDictionary *componentStyles;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) SXDocument *document;
@property (nonatomic, readonly) UIColor *documentBackgroundColor;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SXImageController *imageController;
@property (nonatomic, readonly) SXMetadata *metadata;
@property (nonatomic, readonly) NSArray *requiredResourceURLs;
@property (nonatomic, readonly) bool requiresLinkedContentForLayout;
@property (nonatomic, readonly) NSString *shareURL;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIColor *topBackgroundColor;

- (void).cxx_destruct;
- (id)additions;
- (id)additionsForComponents:(id)arg1;
- (id)allImageResources;
- (id)componentIdentifierUsingThumbnail;
- (id)componentIdentifierUsingThumbnailInComponents:(id)arg1;
- (id)componentLayoutForIdentifier:(id)arg1;
- (id)componentStyleForComponent:(id)arg1;
- (id)componentStyleMerger;
- (id)componentStyles;
- (id)document;
- (id)documentBackgroundColor;
- (id)filterImageResources;
- (id)imageController;
- (id)imageResourceForIdentifier:(id)arg1;
- (id)initWithDocument:(id)arg1 shareURL:(id)arg2;
- (id)largestImageResourceForImageIdentifier:(id)arg1;
- (id)mergedObjectsWithIdentifiers:(id)arg1 fromDictionary:(id)arg2 merger:(id)arg3;
- (id)metadata;
- (id)requiredResourceURLs;
- (bool)requiresLinkedContentForLayout;
- (id)resourceForIdentifier:(id)arg1;
- (void)setComponentStyles:(id)arg1;
- (void)setImageController:(id)arg1;
- (id)shareURL;
- (id)topBackgroundColor;

@end
