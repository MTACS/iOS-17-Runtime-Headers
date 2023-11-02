
@interface QLDataSource : NSObject <QLPreviewItemProvider> {
    NSArray * _previewItems;
}

- (void).cxx_destruct;
- (id)initWithPreviewItems:(id)arg1;
- (void)previewItemAtIndex:(unsigned long long)arg1 withCompletionHandler:(id /* block */)arg2;

@end
