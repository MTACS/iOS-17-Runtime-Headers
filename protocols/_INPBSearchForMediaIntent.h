
@protocol _INPBSearchForMediaIntent <NSObject>

@required

+ (Class)mediaItemsType;

- (void)addMediaItems:(_INPBMediaItemValue *)arg1;
- (void)clearMediaItems;
- (bool)hasIntentMetadata;
- (bool)hasMediaSearch;
- (bool)hasPrivateSearchForMediaIntentData;
- (_INPBIntentMetadata *)intentMetadata;
- (NSArray *)mediaItems;
- (_INPBMediaItemValue *)mediaItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)mediaItemsCount;
- (_INPBMediaSearch *)mediaSearch;
- (_INPBPrivateSearchForMediaIntentData *)privateSearchForMediaIntentData;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setMediaItems:(NSArray *)arg1;
- (void)setMediaSearch:(_INPBMediaSearch *)arg1;
- (void)setPrivateSearchForMediaIntentData:(_INPBPrivateSearchForMediaIntentData *)arg1;

@end
