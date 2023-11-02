
@protocol TUUIDataSource <NSObject>

@required

- (void)fetchInCallUIState:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TUUIContext *, NSError *, void*
- (void)handleRedialCommandWhileScreening:(TUDialRequest *)arg1;
- (void)shouldHostHandleMRCommand:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)shouldHostHandleMRCommand:(void *)arg1 sourceIdentifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: unsigned int, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
