
@interface MusicKit_SoftLinking_MPModelStoreBrowseContentItem : NSObject <MusicKit_SoftLinking_MPSectionedCollectionObject> {
    MPModelStoreBrowseContentItem * _underlyingItem;
}

@property (nonatomic, readonly) MPModelStoreBrowseContentItem *_underlyingObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MusicKit_SoftLinking_MPModelObject *innerObject;
@property (readonly) Class superclass;
@property (nonatomic, readonly) id underlyingObject;

+ (long long)_genericObjectTypeForItemType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)_underlyingObject;
- (id)initWithInnerObject:(id)arg1;
- (id)innerObject;
- (id)underlyingObject;

@end
