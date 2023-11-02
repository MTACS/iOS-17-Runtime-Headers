
@protocol MPCPlayerResponseBuilder <MPCResponseMediaRemoteControllerChaining>

@optional

- (MPCPlayerAudioFormat *)activeAudioFormat:(MPCPlayerAudioFormat *)arg1 chain:(MPMiddlewareChain *)arg2;
- (long long)activeAudioFormatJustification:(long long)arg1 chain:(MPMiddlewareChain *)arg2;
- (NSArray *)alternateAudioFormats:(NSArray *)arg1 chain:(MPMiddlewareChain *)arg2;
- (unsigned long long)audioFormatPreference:(unsigned long long)arg1 chain:(MPMiddlewareChain *)arg2;
- (MPCPlayerAudioRoute *)audioRoute:(MPCPlayerAudioRoute *)arg1 chain:(MPMiddlewareChain *)arg2;
- (MPNowPlayingParticipantItem *)participant:(MPNowPlayingParticipantItem *)arg1 atIndexPath:(NSIndexPath *)arg2 chain:(MPMiddlewareChain *)arg3;
- (long long)playerCommandDisabledReason:(long long)arg1 command:(unsigned int)arg2 chain:(MPMiddlewareChain *)arg3;
- (bool)playerCommandEnabled:(bool)arg1 command:(unsigned int)arg2 chain:(MPMiddlewareChain *)arg3;
- (id)playerCommandOptionValue:(id)arg1 forKey:(NSString *)arg2 command:(unsigned int)arg3 chain:(MPMiddlewareChain *)arg4;
- (bool)playerCommandSupported:(bool)arg1 command:(unsigned int)arg2 chain:(MPMiddlewareChain *)arg3;
- (long long)playerExplicitContentState:(long long)arg1 chain:(MPMiddlewareChain *)arg2;
- (long long)playerGlobalItemCount:(long long)arg1 chain:(MPMiddlewareChain *)arg2;
- (bool)playerIsSharedListeningSession:(bool)arg1 chain:(MPMiddlewareChain *)arg2;
- (NSArray *)playerItemCurrentLanguageOptions:(NSArray *)arg1 atIndexPath:(NSIndexPath *)arg2 chain:(MPMiddlewareChain *)arg3;
- (struct { double x1; double x2; double x3; double x4; double x5; float x6; float x7; bool x8; bool x9; })playerItemDuration:(struct { double x1; double x2; double x3; double x4; double x5; float x6; float x7; bool x8; bool x9; })arg1 atIndexPath:(NSIndexPath *)arg2 chain:(MPMiddlewareChain *)arg3;
- (long long)playerItemEditingStyleFlags:(long long)arg1 atIndexPath:(NSIndexPath *)arg2 chain:(MPMiddlewareChain *)arg3;
- (NSString *)playerItemExplicitBadge:(NSString *)arg1 atIndexPath:(NSIndexPath *)arg2 chain:(MPMiddlewareChain *)arg3;
- (bool)playerItemIsPlaceholder:(bool)arg1 atIndexPath:(NSIndexPath *)arg2 chain:(MPMiddlewareChain *)arg3;
- (NSArray *)playerItemLanguageOptionGroups:(NSArray *)arg1 atIndexPath:(NSIndexPath *)arg2 chain:(MPMiddlewareChain *)arg3;
- (NSString *)playerItemLocalizedDurationString:(NSString *)arg1 atIndexPath:(NSIndexPath *)arg2 chain:(MPMiddlewareChain *)arg3;
- (bool)playerItemShouldDisableJumpToItem:(bool)arg1 atIndexPath:(NSIndexPath *)arg2 boundsCheck:(bool)arg3 chain:(MPMiddlewareChain *)arg4;
- (long long)playerLastChangeDirection:(long long)arg1 chain:(MPMiddlewareChain *)arg2;
- (float)playerMaxVocalsLevel:(float)arg1 chain:(MPMiddlewareChain *)arg2;
- (float)playerMinVocalsLevel:(float)arg1 chain:(MPMiddlewareChain *)arg2;
- (MPModelGenericObject *)playerModelObject:(MPModelGenericObject *)arg1 propertySet:(MPPropertySet *)arg2 atIndexPath:(NSIndexPath *)arg3 chain:(MPMiddlewareChain *)arg4;
- (unsigned long long)playerNumberOfItems:(unsigned long long)arg1 inSection:(unsigned long long)arg2 chain:(MPMiddlewareChain *)arg3;
- (unsigned long long)playerNumberOfSections:(unsigned long long)arg1 chain:(MPMiddlewareChain *)arg2;
- (long long)playerPlayingItemGlobalIndex:(long long)arg1 chain:(MPMiddlewareChain *)arg2;
- (NSIndexPath *)playerPlayingItemIndexPath:(NSIndexPath *)arg1 chain:(MPMiddlewareChain *)arg2;
- (long long)playerQueueEndAction:(long long)arg1 chain:(MPMiddlewareChain *)arg2;
- (long long)playerRepeatType:(long long)arg1 chain:(MPMiddlewareChain *)arg2;
- (long long)playerShuffleType:(long long)arg1 chain:(MPMiddlewareChain *)arg2;
- (long long)playerState:(long long)arg1 chain:(MPMiddlewareChain *)arg2;
- (long long)playerUpNextItemCount:(long long)arg1 chain:(MPMiddlewareChain *)arg2;
- (UIView<MPCVideoView> *)playerVideoView:(UIView<MPCVideoView> *)arg1 chain:(MPMiddlewareChain *)arg2;
- (bool)playerVocalsControlActive:(bool)arg1 chain:(MPMiddlewareChain *)arg2;
- (bool)playerVocalsControlContinuous:(bool)arg1 chain:(MPMiddlewareChain *)arg2;
- (float)playerVocalsLevel:(float)arg1 chain:(MPMiddlewareChain *)arg2;
- (MPCPlayerAudioFormat *)preferredAudioFormat:(MPCPlayerAudioFormat *)arg1 chain:(MPMiddlewareChain *)arg2;
- (bool)sectionIsAutoPlaySection:(bool)arg1 atIndex:(long long)arg2 chain:(MPMiddlewareChain *)arg3;
- (NSString *)tracklistUniqueIdentifier:(NSString *)arg1 chain:(MPMiddlewareChain *)arg2;
- (<MPCVideoOutput> *)videoOutput:(id <MPCVideoOutput>)arg1 chain:(MPMiddlewareChain *)arg2;

@end
