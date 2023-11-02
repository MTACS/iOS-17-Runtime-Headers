
@protocol WFCorrectSpellingIntentHandling <NSObject>

@required

- (void)handleCorrectSpelling:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: WFCorrectSpellingIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFCorrectSpellingIntentResponse *, void*
- (void)resolveTextForCorrectSpelling:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: WFCorrectSpellingIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*

@optional

- (void)confirmCorrectSpelling:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: WFCorrectSpellingIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFCorrectSpellingIntentResponse *, void*

@end
