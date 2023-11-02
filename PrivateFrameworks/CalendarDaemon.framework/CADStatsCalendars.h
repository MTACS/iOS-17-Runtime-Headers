
@interface CADStatsCalendars : CADStatCollector {
    NSMutableArray * _calendarInfos;
    CADStatCollectionContext * _context;
}

+ (id)eventName;

- (void).cxx_destruct;
- (bool)calendarUsesAuthentication:(void*)arg1;
- (id)eventDictionaries;
- (void)prepareWithContext:(id)arg1;
- (void)processCalendars:(id)arg1 inStore:(void*)arg2;
- (bool)wantsCalendars;

@end
