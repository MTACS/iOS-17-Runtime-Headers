
@interface MessageListItemHelper : NSObject {
    <MessageListItemHelperDelegate> * _delegate;
}

@property (nonatomic) <MessageListItemHelperDelegate> *delegate;

- (void).cxx_destruct;
- (bool)_isItemAfterItemIDSelected:(id)arg1 snapshot:(id)arg2;
- (bool)_isItemBeforeItemIDSelected:(id)arg1 snapshot:(id)arg2;
- (bool)_isItemIDSelected:(id)arg1;
- (bool)_isNextItemLastExpandedItemID:(id)arg1 snapshot:(id)arg2;
- (long long)cellGroupingForItemID:(id)arg1 snapshot:(id)arg2 isThreaded:(bool)arg3;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (id)itemIDAfterItemID:(id)arg1 snapshot:(id)arg2;
- (id)itemIDBeforeItemID:(id)arg1 snapshot:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
