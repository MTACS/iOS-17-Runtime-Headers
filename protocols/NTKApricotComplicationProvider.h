
@protocol NTKApricotComplicationProvider <NSObject>

@required

- (void)enumerateDescriptorsCompatibleWithFamilies:(void *)arg1 withBlock:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CLKWidgetComplicationDescriptor *, bool*, void*
- (NTKApricotComplicationInfo *)infoForDescriptor:(CLKWidgetComplicationDescriptor *)arg1;
- (bool)vendorExistsWithDescriptor:(CLKWidgetComplicationDescriptor *)arg1;

@end
