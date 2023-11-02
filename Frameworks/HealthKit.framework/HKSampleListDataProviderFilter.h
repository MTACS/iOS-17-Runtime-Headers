
@interface HKSampleListDataProviderFilter : NSObject {
    _HKFilter * _filter;
}

- (void).cxx_destruct;
- (bool)acceptsDataObject:(id)arg1;
- (id)init;
- (id)initWithPredicate:(id)arg1 dataTypes:(id)arg2;

@end
