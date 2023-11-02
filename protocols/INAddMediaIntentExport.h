
@protocol INAddMediaIntentExport <NSObject, JSExport>

@required

- (id)init;
- (INMediaDestination *)mediaDestination;
- (NSArray *)mediaItems;
- (INMediaSearch *)mediaSearch;
- (INPrivateAddMediaIntentData *)privateAddMediaIntentData;
- (void)setMediaDestination:(INMediaDestination *)arg1;
- (void)setMediaItems:(NSArray *)arg1;
- (void)setMediaSearch:(INMediaSearch *)arg1;
- (void)setPrivateAddMediaIntentData:(INPrivateAddMediaIntentData *)arg1;

@end
