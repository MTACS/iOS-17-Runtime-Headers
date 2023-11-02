
@protocol SBInCallPresentationRequestServerDelegate <NSObject>

@required

- (void)inCallPresentationRequestServer:(void *)arg1 clientWithIdentifier:(void *)arg2 requestsPresentationWithConfiguration:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: SBInCallPresentationRequestServer *, <NSCopying> *, SBSInCallPresentationConfiguration *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)inCallPresentationRequestServer:(SBInCallPresentationRequestServer *)arg1 clientWithIdentifierDidInvalidate:(id <NSCopying>)arg2;

@end
