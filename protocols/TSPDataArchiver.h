
@protocol TSPDataArchiver <NSObject>

@required

- (void)addDataFinalizeHandlerForSuccessfulSave:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (NSURL *)relativeURLForExternalData;

@end
