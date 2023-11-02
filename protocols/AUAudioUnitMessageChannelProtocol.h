
@protocol AUAudioUnitMessageChannelProtocol

@required

- (void)onCallRemoteAU:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSDictionary *, void*

@optional

- (void)releaseChannel;

@end
