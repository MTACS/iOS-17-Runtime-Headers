
@interface WFMediaItemDescriptor : MTLModel <MTLJSONSerializing, NSSecureCoding> {
    INPlayMediaIntent * _intent;
    NSString * _itemName;
    NSNumber * _persistentIdentifier;
    NSData * _playbackArchiveData;
    NSString * _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) INPlayMediaIntent *intent;
@property (nonatomic, readonly, copy) NSString *itemName;
@property (nonatomic, readonly, copy) NSNumber *persistentIdentifier;
@property (nonatomic, readonly, copy) NSData *playbackArchiveData;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *type;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)allDescriptorsForMediaTypeUsingMPMediaQuery:(id)arg1;
+ (id)allDescriptorsInLibraryForMediaType:(id)arg1;
+ (id)collectionForPlaybackWithItemName:(id)arg1 persistentIdentifier:(id)arg2 mediaType:(id)arg3;
+ (id)collectionsOrItemsFromQuery:(id)arg1 forMediaType:(id)arg2;
+ (id)descriptorForMPMediaEntity:(id)arg1 mediaType:(id)arg2;
+ (id)descriptorWithPersistentIdentifier:(id)arg1 mediaType:(id)arg2;
+ (id)intentJSONTransformer;
+ (id)itemCollectionFromQuery:(id)arg1 mediaType:(id)arg2;
+ (id)mpMediaQueryForName:(id)arg1 withMediaType:(id)arg2;
+ (id)mpMediaQueryForPersistentIdentifier:(id)arg1 withMediaType:(id)arg2;
+ (id)playbackArchiveDataJSONTransformer;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)collectionForPlayback;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithIntent:(id)arg1;
- (id)initWithMediaItemName:(id)arg1 persistentIdentifier:(id)arg2 mediaType:(id)arg3;
- (id)initWithMediaItemName:(id)arg1 playbackArchiveData:(id)arg2;
- (id)intent;
- (bool)isEqual:(id)arg1;
- (id)itemName;
- (id)persistentIdentifier;
- (id)playbackArchiveData;
- (id)type;

@end
