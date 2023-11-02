
@protocol INShareETAIntentHandling <NSObject>

@required

- (void)handleShareETA:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INShareETAIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INShareETAIntentResponse *, void*

@optional

- (void)confirmShareETA:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INShareETAIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INShareETAIntentResponse *, void*
- (void)resolveRecipientsForShareETA:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INShareETAIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*

@end
