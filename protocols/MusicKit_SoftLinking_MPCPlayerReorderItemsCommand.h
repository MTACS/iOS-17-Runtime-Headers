
@protocol MusicKit_SoftLinking_MPCPlayerReorderItemsCommand <NSObject>

@required

- (<MusicKit_SoftLinking_MPCPlayerCommandRequest> *)musicKit_reorderItemsCommand_moveItem:(id <MusicKit_SoftLinking_MPCPlayerResponseItem>)arg1 afterItem:(id <MusicKit_SoftLinking_MPCPlayerResponseItem>)arg2;
- (<MusicKit_SoftLinking_MPCPlayerCommandRequest> *)musicKit_reorderItemsCommand_moveItem:(id <MusicKit_SoftLinking_MPCPlayerResponseItem>)arg1 beforeItem:(id <MusicKit_SoftLinking_MPCPlayerResponseItem>)arg2;

@end
