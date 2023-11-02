
@interface CNAutocompleteObservable : CNObservable {
    NSString * _debugDescription;
    CNObservable * _observable;
}

@property (nonatomic, retain) NSString *debugDescription;
@property (nonatomic, retain) CNObservable *observable;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithBlock:(id /* block */)arg1;
- (id)observable;
- (void)setDebugDescription:(id)arg1;
- (void)setObservable:(id)arg1;
- (id)subscribe:(id)arg1;

@end
