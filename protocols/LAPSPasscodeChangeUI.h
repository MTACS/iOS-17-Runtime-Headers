
@protocol LAPSPasscodeChangeUI <NSObject>

@required

- (void)deactivateWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (<LAPSPasscodeChangeUIDelegate> *)delegate;
- (void)fetchNewPasscode:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: LAPSFetchNewPasscodeRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, LAPSFetchNewPasscodeResult *, NSError *, void*
- (void)fetchOldPasscode:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: LAPSFetchOldPasscodeRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, LAPSFetchOldPasscodeResult *, NSError *, void*
- (void)setDelegate:(id <LAPSPasscodeChangeUIDelegate>)arg1;

@end
