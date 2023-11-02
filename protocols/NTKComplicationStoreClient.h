
@protocol NTKComplicationStoreClient <NSObject>

@required

- (void)loadFullCollectionWithLocalizableSampleTemplates:(NSDictionary *)arg1 complicationDescriptors:(NSDictionary *)arg2 seqId:(NSNumber *)arg3;
- (void)removeComplicationSampleTemplatesForClientIdentifier:(NSString *)arg1 descriptor:(CLKComplicationDescriptor *)arg2 seqId:(NSNumber *)arg3;
- (void)updateComplicationDescriptors:(NSArray *)arg1 forClientIdentifier:(NSString *)arg2 seqId:(NSNumber *)arg3;
- (void)updateSampleTemplateReference:(NTKComplicationTemplateReference *)arg1 forClientIdentifier:(NSString *)arg2 descriptor:(CLKComplicationDescriptor *)arg3 family:(long long)arg4 seqId:(NSNumber *)arg5;

@end
