
@protocol SXDataSortDescriptorFactory <NSObject>

@required

- (NSSortDescriptor *)sortDescriptorForDataDescriptor:(SXDataDescriptor *)arg1 ascending:(bool)arg2;

@end
