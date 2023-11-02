
@protocol LAPSPasscodeChangeSystem <NSObject>

@required

- (bool)canChangePasscodeWithError:(id*)arg1;
- (void)changePasscode:(void *)arg1 to:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: LAPSFetchOldPasscodeResult *, LAPSFetchNewPasscodeResult *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)hasPasscode;
- (NSDate *)lastPasscodeChange;
- (LAPSFetchNewPasscodeRequest *)newPasscodeRequest;
- (LAPSFetchOldPasscodeRequest *)oldPasscodeRequest;
- (void)verifyNewPasscode:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: LAPSPasscode *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)verifyPasscode:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: LAPSPasscode *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
