
@interface ATXWalletDataSource : NSObject {
    ATXHeuristicDevice * _device;
}

- (void).cxx_destruct;
- (id)_extractRelevantSemanticTagsFromPass:(id)arg1;
- (unsigned long long)_getPassStyleMaskForString:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (void)passesWithStyle:(id)arg1 callback:(id /* block */)arg2;

@end
