
@interface ATXHeuristicEventTimeUtilities : NSObject {
    ATXEventTravelTimeDataSource * _dataSource;
    CLPlacemark * _destination;
    EKEvent * _event;
    NSDictionary * _resolvedTimeInformation;
    NSObject<OS_dispatch_semaphore> * _semaphore;
    NSString * _transportType;
}

@property (nonatomic, retain) ATXEventTravelTimeDataSource *dataSource;
@property (nonatomic, retain) CLPlacemark *destination;
@property (nonatomic, retain) EKEvent *event;
@property (nonatomic, retain) NSDictionary *resolvedTimeInformation;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *semaphore;
@property (nonatomic, retain) NSString *transportType;

- (void).cxx_destruct;
- (id)dataSource;
- (id)destination;
- (id)event;
- (id)init;
- (id)resolvedTimeInformation;
- (id)semaphore;
- (void)setDataSource:(id)arg1;
- (void)setDestination:(id)arg1;
- (void)setEvent:(id)arg1;
- (void)setResolvedTimeInformation:(id)arg1;
- (void)setSemaphore:(id)arg1;
- (void)setTransportType:(id)arg1;
- (id)transportType;
- (id)travelTimeToEvent:(id)arg1 destination:(id)arg2 transportType:(id)arg3 heuristicDevice:(id)arg4;

@end
