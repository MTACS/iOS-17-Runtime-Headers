
@protocol PRComplicationContainerViewControllerDelegate

@required

- (bool)complicationContainerViewController:(PRComplicationContainerViewController *)arg1 canAddComplication:(PRComplicationDescriptor *)arg2 forLocation:(long long)arg3;
- (void)complicationContainerViewController:(PRComplicationContainerViewController *)arg1 didCancelDropOperationForComplication:(PRComplicationDescriptor *)arg2;
- (void)complicationContainerViewController:(PRComplicationContainerViewController *)arg1 didDropComplication:(PRComplicationDescriptor *)arg2 atIndex:(long long)arg3 forLocation:(long long)arg4;
- (void)complicationContainerViewController:(PRComplicationContainerViewController *)arg1 didEditComplication:(PRComplicationDescriptor *)arg2;
- (void)complicationContainerViewController:(PRComplicationContainerViewController *)arg1 didRemoveComplication:(PRComplicationDescriptor *)arg2 forLocation:(long long)arg3;
- (void)complicationContainerViewController:(PRComplicationContainerViewController *)arg1 didUpdateIconLayout:(NSDictionary *)arg2 forLocation:(long long)arg3;
- (void)complicationContainerViewControllerDidTapAdd:(PRComplicationContainerViewController *)arg1 forLocation:(long long)arg2;
- (void)complicationContainerViewControllerDidTapInlineGallery:(PRComplicationContainerViewController *)arg1;

@end
