
@interface CADStatsEvents : CADStatCollector {
    NSMutableArray * _eventInfos;
}

+ (id)eventName;

- (void).cxx_destruct;
- (id)eventDictionaries;
- (void)prepareWithContext:(id)arg1;
- (void)processEvents:(id)arg1;
- (bool)wantsEvents;

@end
