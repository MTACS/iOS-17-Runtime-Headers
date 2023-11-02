
@interface MapsUI.MUEVChargerAvailability : NSObject {
    void aggregatedInfo;
    void plugs;
    void vehicles;
}

@property (nonatomic, readonly) MURealTimeEVCharger *aggregatedInfo;
@property (nonatomic, readonly) NSArray *plugs;
@property (nonatomic, readonly) NSArray *vehicles;

- (void).cxx_destruct;
- (id)aggregatedInfo;
- (id)init;
- (id)initWithAggregatedCounts:(id)arg1 plugs:(id)arg2 vehicles:(id)arg3;
- (id)plugs;
- (id)vehicles;

@end
