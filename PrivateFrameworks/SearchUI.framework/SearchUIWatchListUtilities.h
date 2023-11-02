
@interface SearchUIWatchListUtilities : NSObject

+ (id)buttonForChannelDetails:(id)arg1 punchoutURLs:(id)arg2 isEntitled:(bool)arg3 isContinuing:(bool)arg4 isContainerItem:(bool)arg5 hasDescriptiveSeasonTitle:(bool)arg6 seasonNumber:(id)arg7 episodeNumber:(id)arg8 isHorizontallySrollingStyle:(bool)arg9;
+ (id)buttonForChannelOffer:(id)arg1 channel:(id)arg2 episode:(id)arg3;
+ (id)buttonForOffer:(id)arg1 playable:(id)arg2;
+ (id)buttonForPlayable:(id)arg1 isHorizontallySrollingStyle:(bool)arg2;
+ (id)buttonWithTitle:(id)arg1 subtitle:(id)arg2 punchoutURL:(id)arg3 type:(unsigned long long)arg4 image:(id)arg5 storeIdentifier:(id)arg6;
+ (id)buttonsForPlayables:(id)arg1 channels:(id)arg2 currentEpisode:(id)arg3 isUpNextable:(bool)arg4 watchListState:(id)arg5 isHorizontallySrollingStyle:(bool)arg6;
+ (bool)channelHasBeenSeen:(id)arg1 seenChannels:(id)arg2;
+ (void)computeButtonsForWatchListIdentifier:(id)arg1 type:(int)arg2 isHorizontallySrollingStyle:(bool)arg3 completion:(id /* block */)arg4;
+ (void)fetchButtonsForWatchListIdentifier:(id)arg1 type:(int)arg2 isHorizontallySrollingStyle:(bool)arg3 completion:(id /* block */)arg4;
+ (void)fetchButtonsForWatchListIdentifier:(id)arg1 type:(int)arg2 isHorizontallySrollingStyle:(bool)arg3 fetchButtons:(bool)arg4 completion:(id /* block */)arg5;
+ (void)fetchWatchListStateForWatchListIdentifier:(id)arg1 type:(int)arg2 completion:(id /* block */)arg3;
+ (void)generateMediaContainerWatchListReponseForWatchListIdentifier:(id)arg1 type:(int)arg2 completion:(id /* block */)arg3;
+ (void)generateWatchListReponseForWatchListIdentifier:(id)arg1 type:(int)arg2 completion:(id /* block */)arg3;
+ (int)watchListTypeForType:(int)arg1 isMediaContainer:(bool)arg2;
+ (long long)wlkTypeForType:(int)arg1;

@end
