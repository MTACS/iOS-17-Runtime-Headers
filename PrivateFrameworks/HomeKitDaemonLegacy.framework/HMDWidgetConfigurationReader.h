
@interface HMDWidgetConfigurationReader : NSObject <HMFLogging> {
    <HMDWidgetConfigurationReaderInterface> * _interface;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <HMDWidgetConfigurationReaderInterface> *interface;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)fetchHomeWidgetsWithCompletion:(id /* block */)arg1;
- (id)fetchedHomeWidgets;
- (long long)homeWidgetsEnabledCount;
- (id)init;
- (id)initWithInterface:(id)arg1;
- (id)interface;

@end
