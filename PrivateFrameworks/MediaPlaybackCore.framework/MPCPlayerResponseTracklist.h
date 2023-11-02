
@interface MPCPlayerResponseTracklist : NSObject <NSObject> {
    long long  _actionAtQueueEnd;
    unsigned long long  _changeItemSupport;
    MPSectionedCollection * _displayItems;
    long long  _explicitContentState;
    long long  _globalItemCount;
    MPSectionedCollection * _items;
    long long  _lastChangeDirection;
    long long  _playingItemGlobalIndex;
    NSIndexPath * _playingItemIndexPath;
    long long  _repeatType;
    MPCPlayerResponse * _response;
    long long  _shuffleType;
    NSString * _uniqueIdentifier;
    long long  _upNextItemCount;
}

@property (nonatomic, readonly) long long actionAtQueueEnd;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) MPSectionedCollection *displayItems;
@property (nonatomic, readonly) long long explicitContentState;
@property (nonatomic, readonly) long long globalItemCount;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) MPSectionedCollection *items;
@property (nonatomic, readonly) long long lastChangeDirection;
@property (nonatomic, readonly) MPCPlayerResponseItem *playingItem;
@property (nonatomic, readonly) long long playingItemGlobalIndex;
@property (nonatomic, readonly, copy) NSIndexPath *playingItemIndexPath;
@property (nonatomic, readonly) long long repeatType;
@property (nonatomic, readonly) MPCPlayerResponse *response;
@property (nonatomic, readonly) long long shuffleType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueIdentifier;
@property (nonatomic, readonly) long long upNextItemCount;

+ (id)insertCommandForPlayerPath:(id)arg1 devices:(id)arg2;
+ (id)resetCommandForPlayerPath:(id)arg1 devices:(id)arg2;

- (void).cxx_destruct;
- (unsigned long long)_determineChangeItemSupport;
- (id)_stateDumpObject;
- (long long)actionAtQueueEnd;
- (id)actionAtQueueEndCommand;
- (id)changeItemCommand;
- (id)displayIndexPathForStructuredIndexPath:(id)arg1;
- (id)displayItems;
- (long long)explicitContentState;
- (long long)globalItemCount;
- (id)initWithResponse:(id)arg1;
- (id)insertCommand;
- (id)items;
- (long long)lastChangeDirection;
- (id)playingItem;
- (long long)playingItemGlobalIndex;
- (id)playingItemIndexPath;
- (id)prepareVocalsControlCommand;
- (id)reorderCommand;
- (id)repeatCommand;
- (long long)repeatType;
- (id)resetCommand;
- (id)response;
- (id)shuffleCommand;
- (long long)shuffleType;
- (id)structuredIndexPathForDisplayIndexPath:(id)arg1;
- (id)uniqueIdentifier;
- (long long)upNextItemCount;
- (id)vocalsControlCommand;

@end
