
@interface CNAutocompleteCalendarQueryAssembler : NSObject {
    CNObservable * _cachedObservable;
    CNObservable * _rawCachedObservable;
    CNObservable * _rawUncachedObservable;
    CNObservable * _uncachedObservable;
}

@property (readonly) CNObservable *cachedObservable;
@property (readonly) CNObservable *rawCachedObservable;
@property (readonly) CNObservable *rawUncachedObservable;
@property (readonly) CNObservable *uncachedObservable;

- (void).cxx_destruct;
- (void)assemble;
- (id)cachedObservable;
- (id)description;
- (id)initWithRawCachedObservable:(id)arg1 rawUncachedObservable:(id)arg2;
- (id)rawCachedObservable;
- (id)rawUncachedObservable;
- (id)uncachedObservable;

@end
