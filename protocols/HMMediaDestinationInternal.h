
@protocol HMMediaDestinationInternal <HMMediaDestination>

@required

- (NSUUID *)audioDestinationGroupIdentifier;
- (NSArray *)audioDestinationMediaProfiles;
- (NSString *)audioDestinationParentIdentifier;
- (void)updateAudioDestinationSupportedOptions:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
