
@protocol SkipContentIntentHandling <NSObject>

@required

- (void)handleSkipContent:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SkipContentIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SkipContentIntentResponse *, void*
- (void)handleSkipContent:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SkipContentIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SkipContentIntentResponse *, void*
- (void)resolveDevicesForSkipContent:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SkipContentIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)resolveDevicesForSkipContent:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SkipContentIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*

@optional

- (void)confirmSkipContent:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SkipContentIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SkipContentIntentResponse *, void*
- (void)confirmSkipContent:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SkipContentIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SkipContentIntentResponse *, void*

@end
