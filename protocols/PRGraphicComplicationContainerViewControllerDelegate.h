
@protocol PRGraphicComplicationContainerViewControllerDelegate

@required

- (bool)graphicComplicationContainerViewController:(PRGraphicComplicationContainerViewController *)arg1 canAddComplication:(PRComplicationDescriptor *)arg2;
- (void)graphicComplicationContainerViewController:(PRGraphicComplicationContainerViewController *)arg1 didCancelDropOperationForComplication:(PRComplicationDescriptor *)arg2;
- (void)graphicComplicationContainerViewController:(PRGraphicComplicationContainerViewController *)arg1 didDropComplication:(PRComplicationDescriptor *)arg2 atIndex:(long long)arg3;
- (void)graphicComplicationContainerViewController:(PRGraphicComplicationContainerViewController *)arg1 didRemoveComplication:(PRComplicationDescriptor *)arg2;
- (void)graphicComplicationContainerViewController:(PRGraphicComplicationContainerViewController *)arg1 didTapComplication:(PRComplicationDescriptor *)arg2;
- (void)graphicComplicationContainerViewControllerDidTapAdd:(PRGraphicComplicationContainerViewController *)arg1;

@end
