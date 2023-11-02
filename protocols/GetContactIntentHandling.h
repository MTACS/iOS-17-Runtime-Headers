
@protocol GetContactIntentHandling <NSObject>

@required

- (void)handleGetContact:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: GetContactIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GetContactIntentResponse *, void*
- (void)handleGetContact:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: GetContactIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GetContactIntentResponse *, void*
- (void)resolveSiriMatchesForGetContact:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: GetContactIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)resolveSiriMatchesForGetContact:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: GetContactIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*

@optional

- (void)confirmGetContact:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: GetContactIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GetContactIntentResponse *, void*
- (void)confirmGetContact:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: GetContactIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GetContactIntentResponse *, void*

@end
