
@interface STStatusItemsStatusDomainVisualDescriptorTransformer : NSObject <STStatusDomainDataTransforming> {
    STStatusItemsManager * _statusItemsManager;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithStatusItemsManager:(id)arg1;
- (id)transformedDataForData:(id)arg1;

@end
