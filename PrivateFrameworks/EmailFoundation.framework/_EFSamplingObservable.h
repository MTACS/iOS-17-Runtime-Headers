
@interface _EFSamplingObservable : EFObservable {
    <EFObservable> * _observable;
    <EFObservable> * _sampler;
}

- (void).cxx_destruct;
- (id)initWithObservable:(id)arg1 sampler:(id)arg2;
- (id)subscribe:(id)arg1;

@end
