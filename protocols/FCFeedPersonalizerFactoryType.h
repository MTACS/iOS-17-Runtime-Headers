
@protocol FCFeedPersonalizerFactoryType <NSObject>

@required

- (<FCFeedPersonalizing> *)newFeedPersonalizerWithAggregateStore:(FCReadonlyPersonalizationAggregateStore *)arg1 appConfigurationManager:(id <FCNewsAppConfigurationManager>)arg2 todayPrivateData:(id <FCTodayPrivateData>)arg3;

@end
