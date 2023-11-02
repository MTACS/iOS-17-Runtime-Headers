
@interface NWCDailyForecastUltravioletIndexViewBuilder : NSObject <NWCDailyForecastViewBuildable> {
    CLKDevice * _device;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CLKDevice *device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createDailyForecastView;
- (id)device;
- (id)initWithDevice:(id)arg1;

@end
