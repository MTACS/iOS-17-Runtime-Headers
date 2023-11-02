
@interface _EFCombineLatestObservable : EFObservable {
    NSArray * _observables;
}

@property (nonatomic, copy) NSArray *observables;

- (void).cxx_destruct;
- (id)initWithObservables:(id)arg1;
- (id)observables;
- (void)setObservables:(id)arg1;
- (id)subscribe:(id)arg1;

@end
