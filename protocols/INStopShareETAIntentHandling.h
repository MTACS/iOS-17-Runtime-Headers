
@protocol INStopShareETAIntentHandling <NSObject>

@required

- (void)handleStopShareETA:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INStopShareETAIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INStopShareETAIntentResponse *, void*

@optional

- (void)confirmStopShareETA:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INStopShareETAIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INStopShareETAIntentResponse *, void*
- (void)resolveRecipientsForStopShareETA:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INStopShareETAIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*

@end
