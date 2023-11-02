
@interface STMediaStatusDomainDisplayNameTransformer : NSObject <STStatusDomainDataTransforming> {
    <STAttributedEntityBatchResolving> * _entityResolver;
}

- (void).cxx_destruct;
- (id)initWithEntityResolver:(id)arg1;
- (id)transformedDataForData:(id)arg1;

@end
