
@protocol MPCPlayerChangeItemCommand <MPCPlayerCommand>

@required

- (MPCPlayerCommandRequest *)changeToItem:(MPCPlayerResponseItem *)arg1;
- (MPCPlayerCommandRequest *)changeToSection:(MPCPlayerResponseSection *)arg1;
- (MPCPlayerCommandRequest *)nextChapter;
- (MPCPlayerCommandRequest *)nextItem;
- (MPCPlayerCommandRequest *)nextSection;
- (MPCPlayerCommandRequest *)previousChapter;
- (MPCPlayerCommandRequest *)previousItem;
- (MPCPlayerCommandRequest *)previousItemDeferringToPlaybackQueuePosition;
- (MPCPlayerCommandRequest *)previousSection;

@end
