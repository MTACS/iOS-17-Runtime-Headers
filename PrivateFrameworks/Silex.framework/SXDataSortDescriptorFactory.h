
@interface SXDataSortDescriptorFactory : NSObject <SXDataSortDescriptorFactory>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)sortDescriptorForDataDescriptor:(id)arg1 ascending:(bool)arg2;

@end
