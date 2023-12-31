
@interface AVLazyValueLoadingMetadataItem : AVMetadataItem {
    AVLazyValueLoadingMetadataItemInternal * _lazyMetadataItem;
}

+ (id)metadataItemWithPropertiesOfMetadataItem:(id)arg1 valueLoadingHandler:(id /* block */)arg2;

- (id)_initWithFigMetadataDictionary:(id)arg1 valueLoadingHandler:(id /* block */)arg2;
- (bool)_valueForKeyDependsOnMetadataValue:(id)arg1;
- (void)_valueRequestDidFinish;
- (long long)_valueStatus;
- (void)_waitForLoadingOfValueDependentKey:(id)arg1;
- (id)dataType;
- (void)dealloc;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(id /* block */)arg2;
- (long long)statusOfValueForKey:(id)arg1 error:(id*)arg2;
- (id)value;

@end
