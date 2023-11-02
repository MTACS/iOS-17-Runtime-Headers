
@protocol AFUIPresenter

@required

- (void)displayForDocumentTraits:(void *)arg1 documentState:(void *)arg2 textOperationsHandler:(void *)arg3; // needs 3 arg types, found 8: RTIDocumentTraits *, RTIDocumentState *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, RTITextOperations *, void*
- (void)documentStateChanged:(RTIDocumentState *)arg1;
- (void)hide;

@end
