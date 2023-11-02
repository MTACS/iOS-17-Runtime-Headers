
@protocol CRSCardServing <CRSServing>

@required

- (bool)canSatisfyCardRequest:(id <CRSCardRequesting>)arg1;
- (void)requestCard:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: <CRSCardRequesting> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <CRCard> *, NSError *, void*
- (unsigned long long)servicePriorityForRequest:(id <CRSCardRequesting>)arg1;

@end
