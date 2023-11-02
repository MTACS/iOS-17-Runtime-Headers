
@interface PGTitleGenerationContext : NSObject {
    PGGraphPublicEventCategoryNodeCollection * _appleEventsCategoryNodes;
    PGGraph * _graph;
    CLSHolidayCalendarEventService * _holidayService;
    PGGraphLocationHelper * _locationHelper;
}

@property (readonly) PGGraphPublicEventCategoryNodeCollection *appleEventsCategoryNodes;
@property (nonatomic, retain) PGGraph *graph;
@property (readonly) CLSHolidayCalendarEventService *holidayService;
@property (readonly) PGGraphLocationHelper *locationHelper;

- (void).cxx_destruct;
- (id)appleEventsCategoryNodes;
- (id)graph;
- (id)holidayService;
- (id)initLegacyForMemories;
- (id)initWithGraph:(id)arg1;
- (id)locationHelper;
- (void)setGraph:(id)arg1;

@end
