
@protocol NTKComplicationCollectionObserver <NSObject>

@optional

- (void)complicationCollection:(NTKComplicationCollection *)arg1 didRemoveSampleTemplatesForClient:(NSString *)arg2 descriptor:(CLKComplicationDescriptor *)arg3;
- (void)complicationCollection:(NTKComplicationCollection *)arg1 didUpdateComplicationDescriptorsForClient:(NSString *)arg2;
- (void)complicationCollection:(NTKComplicationCollection *)arg1 didUpdateSampleTemplateForClient:(NSString *)arg2 descriptor:(CLKComplicationDescriptor *)arg3;
- (void)complicationCollectionDidLoad:(NTKComplicationCollection *)arg1;
- (void)complicationCollectionDidReload:(NTKComplicationCollection *)arg1;

@end
