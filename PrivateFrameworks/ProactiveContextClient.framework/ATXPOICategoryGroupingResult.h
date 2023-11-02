
@interface ATXPOICategoryGroupingResult : NSObject {
    NSArray * _events;
    ATXPOICategoryVisitEvent * _finalPOIWithoutExit;
}

@property (nonatomic, readonly) NSArray *events;
@property (nonatomic, readonly) ATXPOICategoryVisitEvent *finalPOIWithoutExit;

- (void).cxx_destruct;
- (id)events;
- (id)finalPOIWithoutExit;
- (id)initWithEvents:(id)arg1 finalPOIWithoutExit:(id)arg2;

@end
