
@protocol SBSSystemNotesPresentationServerToClientInterface <NSObject>

@required

- (oneway void)configuration:(SBSSystemNotesPresentationConfiguration *)arg1 didChangeToPresentationMode:(NSNumber *)arg2;
- (oneway void)configuration:(SBSSystemNotesPresentationConfiguration *)arg1 didInvalidateWithError:(NSError *)arg2;

@end
