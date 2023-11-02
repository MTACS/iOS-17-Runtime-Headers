
@protocol MusicKit_SoftLinking_MPCPlayerResponseTracklist <NSObject>

@required

- (long long)musicKit_responseTracklist_actionAtQueueEnd;
- (<MusicKit_SoftLinking_MPCPlayerActionAtQueueEndCommand> *)musicKit_responseTracklist_actionAtQueueEndCommand;
- (<MusicKit_SoftLinking_MPCPlayerChangeItemCommand> *)musicKit_responseTracklist_changeItemCommand;
- (<MusicKit_SoftLinking_MPCPlayerInsertItemsCommand> *)musicKit_responseTracklist_insertCommand;
- (<MusicKit_SoftLinking_MPCPlayerResponseItem> *)musicKit_responseTracklist_playingItem;
- (<MusicKit_SoftLinking_MPCPlayerReorderItemsCommand> *)musicKit_responseTracklist_reorderCommand;
- (<MusicKit_SoftLinking_MPCPlayerRepeatCommand> *)musicKit_responseTracklist_repeatCommand;
- (long long)musicKit_responseTracklist_repeatType;
- (<MusicKit_SoftLinking_MPCPlayerResetTracklistCommand> *)musicKit_responseTracklist_resetCommand;
- (MusicKit_SoftLinking_MPSectionedCollection *)musicKit_responseTracklist_sectionedCollection;
- (<MusicKit_SoftLinking_MPCPlayerShuffleCommand> *)musicKit_responseTracklist_shuffleCommand;
- (long long)musicKit_responseTracklist_shuffleType;
- (id /* block */)musicKit_responseTracklist_underlyingSectionObjectAtIndexPathBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, NSIndexPath *, void*, id, SEL

@end
