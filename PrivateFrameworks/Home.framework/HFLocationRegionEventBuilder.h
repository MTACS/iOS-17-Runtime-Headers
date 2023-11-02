
@interface HFLocationRegionEventBuilder : HFEventBuilder <HFLocationEventBuilder> {
    CLCircularRegion * _region;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long locationEventType;
@property (nonatomic, copy) CLCircularRegion *region;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)buildNewEventsFromCurrentState;
- (id)compareToObject:(id)arg1;
- (id)comparisonKey;
- (id)description;
- (id)eventType;
- (id)initWithEvent:(id)arg1;
- (bool)isRegionAtHome:(id)arg1;
- (unsigned long long)locationEventType;
- (id)naturalLanguageNameWithOptions:(id)arg1;
- (id)region;
- (void)setRegion:(id)arg1;

@end
