
@interface PXStoryConcreteTextResource : PXStoryConcreteResource <PXStoryTextResource> {
    PXStoryTextResourceInfo * _textResourceInfo;
    long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *px_storyResourceIdentifier;
@property (nonatomic, readonly) long long px_storyResourceKind;
@property (nonatomic, readonly) PXStoryTextResourceInfo *px_storyResourceTextResourceInfo;
@property (nonatomic, readonly) long long px_storyResourceTextType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithAssetCollection:(id)arg1 type:(long long)arg2;
- (id)initWithChapter:(id)arg1 type:(long long)arg2;
- (id)initWithIdentifier:(id)arg1 kind:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)px_storyResourceTextResourceInfo;
- (long long)px_storyResourceTextType;

@end
