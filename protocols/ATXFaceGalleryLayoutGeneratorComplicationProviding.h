
@protocol ATXFaceGalleryLayoutGeneratorComplicationProviding <NSObject>

@required

- (ATXComplicationSet *)inlineSet;
- (NSArray *)landscapeModularSetsDictsWithWidgetDescriptorsAdditionalData:(NSDictionary *)arg1 portraitSets:(NSArray *)arg2;
- (NSDictionary *)landscapeModularSetsWithWidgetDescriptorsAdditionalData:(NSDictionary *)arg1;
- (NSArray *)modularSetsWithWidgetDescriptorsAdditionalData:(NSDictionary *)arg1;

@end
