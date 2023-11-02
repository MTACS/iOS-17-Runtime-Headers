
@protocol NENexusDelegate <NSObject>

@required

- (void)acceptNewFlow:(void *)arg1 fromNexus:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NENexusFlow *, NENexus *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NENexusFlowAssignedProperties *, void*
- (void)handleRequestToActivateNexus:(NENexus *)arg1 fromFlow:(NENexusFlow *)arg2;

@optional

- (void)startBrowse:(NENexusBrowse *)arg1 fromNexus:(NENexus *)arg2;
- (void)stopBrowse:(NENexusBrowse *)arg1 fromNexus:(NENexus *)arg2;

@end
