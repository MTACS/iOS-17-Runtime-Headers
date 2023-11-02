
@protocol _INPBSearchForMediaIntentResponse <NSObject>

@required

+ (Class)mediaItemsType;

- (void)addMediaItems:(_INPBMediaItemValue *)arg1;
- (void)clearMediaItems;
- (NSArray *)mediaItems;
- (_INPBMediaItemValue *)mediaItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)mediaItemsCount;
- (void)setMediaItems:(NSArray *)arg1;

@end
