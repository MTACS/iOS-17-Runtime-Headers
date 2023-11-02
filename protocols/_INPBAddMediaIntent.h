
@protocol _INPBAddMediaIntent <NSObject>

@required

+ (Class)mediaItemsType;

- (void)addMediaItems:(_INPBMediaItemValue *)arg1;
- (void)clearMediaItems;
- (bool)hasIntentMetadata;
- (bool)hasMediaDestination;
- (bool)hasMediaSearch;
- (bool)hasPrivateAddMediaIntentData;
- (_INPBIntentMetadata *)intentMetadata;
- (_INPBMediaDestination *)mediaDestination;
- (NSArray *)mediaItems;
- (_INPBMediaItemValue *)mediaItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)mediaItemsCount;
- (_INPBMediaSearch *)mediaSearch;
- (_INPBPrivateAddMediaIntentData *)privateAddMediaIntentData;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setMediaDestination:(_INPBMediaDestination *)arg1;
- (void)setMediaItems:(NSArray *)arg1;
- (void)setMediaSearch:(_INPBMediaSearch *)arg1;
- (void)setPrivateAddMediaIntentData:(_INPBPrivateAddMediaIntentData *)arg1;

@end
