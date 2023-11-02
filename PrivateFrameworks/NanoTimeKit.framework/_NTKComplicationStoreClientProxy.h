
@interface _NTKComplicationStoreClientProxy : NSObject {
    <NTKComplicationStoreClient> * _proxy;
}

- (void).cxx_destruct;
- (id)initWithWeakProxy:(id)arg1;
- (void)loadFullCollectionWithLocalizableSampleTemplates:(id)arg1 complicationDescriptors:(id)arg2 seqId:(id)arg3;
- (void)removeComplicationSampleTemplatesForClientIdentifier:(id)arg1 descriptor:(id)arg2 seqId:(id)arg3;
- (void)updateComplicationDescriptors:(id)arg1 forClientIdentifier:(id)arg2 seqId:(id)arg3;
- (void)updateSampleTemplateReference:(id)arg1 forClientIdentifier:(id)arg2 descriptor:(id)arg3 family:(long long)arg4 seqId:(id)arg5;

@end
