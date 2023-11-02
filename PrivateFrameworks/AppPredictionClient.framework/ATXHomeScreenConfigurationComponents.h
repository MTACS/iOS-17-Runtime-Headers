
@interface ATXHomeScreenConfigurationComponents : NSObject {
    NSArray * _apps;
    NSArray * _pinnedWidgets;
    NSMutableDictionary * _stackForStackedWidgetIdDictionary;
    NSArray * _stackedWidgets;
    NSArray * _stacks;
}

@property (nonatomic, readonly) NSArray *apps;
@property (nonatomic, readonly) NSArray *pinnedWidgets;
@property (nonatomic, readonly) NSArray *stackedWidgets;
@property (nonatomic, readonly) NSArray *stacks;

- (void).cxx_destruct;
- (id)apps;
- (bool)containsWidgetWithBundleId:(id)arg1 kind:(id)arg2 size:(unsigned long long)arg3;
- (id)init;
- (id)initWithConfigurations:(id)arg1;
- (id)pinnedWidgets;
- (id)stackForStackedWidget:(id)arg1;
- (id)stackedWidgets;
- (id)stacks;

@end
