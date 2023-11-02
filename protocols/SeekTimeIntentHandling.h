
@protocol SeekTimeIntentHandling <NSObject>

@required

- (void)handleSeekTime:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SeekTimeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SeekTimeIntentResponse *, void*
- (void)handleSeekTime:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SeekTimeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SeekTimeIntentResponse *, void*
- (void)resolveDevicesForSeekTime:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SeekTimeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)resolveDevicesForSeekTime:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SeekTimeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)resolvePlayheadPositionForSeekTime:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SeekTimeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SeekTimePlayheadPositionResolutionResult *, void*
- (void)resolvePlayheadPositionForSeekTime:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SeekTimeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SeekTimePlayheadPositionResolutionResult *, void*

@optional

- (void)confirmSeekTime:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SeekTimeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SeekTimeIntentResponse *, void*
- (void)confirmSeekTime:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SeekTimeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SeekTimeIntentResponse *, void*

@end
