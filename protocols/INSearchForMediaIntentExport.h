
@protocol INSearchForMediaIntentExport <NSObject, JSExport>

@required

- (id)init;
- (NSArray *)mediaItems;
- (INMediaSearch *)mediaSearch;
- (INPrivateSearchForMediaIntentData *)privateSearchForMediaIntentData;
- (void)setMediaItems:(NSArray *)arg1;
- (void)setMediaSearch:(INMediaSearch *)arg1;
- (void)setPrivateSearchForMediaIntentData:(INPrivateSearchForMediaIntentData *)arg1;

@end
