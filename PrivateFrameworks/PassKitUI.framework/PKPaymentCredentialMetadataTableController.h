
@interface PKPaymentCredentialMetadataTableController : NSObject {
    long long  _cellStyle;
    NSArray * _metadata;
    long long  _setupContext;
}

- (void).cxx_destruct;
- (id)cellForRowAtIndexPath:(id)arg1;
- (id)initWithMetadata:(id)arg1 setupContext:(long long)arg2 cellStyle:(long long)arg3;
- (long long)numberOfRowsInSection:(long long)arg1;
- (id)tableView:(id)arg1 contextMenuConfigurationForRowAtIndexPath:(id)arg2 point:(struct CGPoint { double x1; double x2; })arg3;
- (void)willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;

@end
