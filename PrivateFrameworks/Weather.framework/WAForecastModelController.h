
@interface WAForecastModelController : NSObject {
    NSObject<OS_dispatch_queue> * _completionHandlerQueue;
    NSMutableDictionary * _completionHandlersForCity;
    WFServiceConnection * _connection;
    NSOperationQueue * _forecastOperationQueue;
    struct ct_green_tea_logger_s { } * _greenTeaLogger;
    NSObject<OS_dispatch_queue> * _incomingRequestQueue;
    WALocationPrivacySampler * _locationGeocodingSampler;
    NSMutableDictionary * _priorityCompletionHandlersForCity;
    NSOperationQueue * _priorityForecastOperationQueue;
    NSMutableSet * _priorityUpdatingCities;
    WFWeatherStoreService * _store;
    NSString * _trackingParameter;
    NSMutableSet * _updatingCities;
}

@property (retain) NSObject<OS_dispatch_queue> *completionHandlerQueue;
@property (retain) NSMutableDictionary *completionHandlersForCity;
@property (nonatomic, retain) WFServiceConnection *connection;
@property (retain) NSOperationQueue *forecastOperationQueue;
@property (nonatomic) struct ct_green_tea_logger_s { }*greenTeaLogger;
@property (retain) NSObject<OS_dispatch_queue> *incomingRequestQueue;
@property (nonatomic, retain) WALocationPrivacySampler *locationGeocodingSampler;
@property (retain) NSMutableDictionary *priorityCompletionHandlersForCity;
@property (retain) NSOperationQueue *priorityForecastOperationQueue;
@property (retain) NSMutableSet *priorityUpdatingCities;
@property (readonly) WFWeatherStoreService *store;
@property (copy) NSString *trackingParameter;
@property (retain) NSMutableSet *updatingCities;

- (void).cxx_destruct;
- (id)_commaSeparatedNamesForUpdatingCities:(id)arg1;
- (id)_commaSeparatedPriorityUpdatingCitiesNames;
- (id)_commaSeparatedUpdatingCitiesNames;
- (void)_handleForecastOperationCompletion:(id)arg1;
- (id)_queue_executeFetchForCity:(id)arg1 completion:(id /* block */)arg2;
- (id)_queue_executeFetchForCity:(id)arg1 withUnits:(int)arg2 requestOptions:(id)arg3 completion:(id /* block */)arg4;
- (id)_queue_executeFetchForCity:(id)arg1 withUnits:(int)arg2 requestOptions:(id)arg3 completion:(id /* block */)arg4 completionHandlersForCity:(id)arg5 updatingCities:(id)arg6;
- (void)cancelAllFetchRequests;
- (id)completionHandlerQueue;
- (id)completionHandlersForCity;
- (id)connection;
- (void)dealloc;
- (bool)fetchForecastForCities:(id)arg1 completion:(id /* block */)arg2;
- (bool)fetchForecastForCity:(id)arg1 completion:(id /* block */)arg2;
- (bool)fetchForecastForCity:(id)arg1 withUnits:(int)arg2 completion:(id /* block */)arg3;
- (bool)fetchForecastForCity:(id)arg1 withUnits:(int)arg2 requestOptions:(id)arg3 completion:(id /* block */)arg4;
- (id)forecastOperationQueue;
- (struct ct_green_tea_logger_s { }*)greenTeaLogger;
- (id)incomingRequestQueue;
- (id)init;
- (bool)isCityBeingUpdated:(id)arg1;
- (bool)isPriorityCity:(id)arg1;
- (bool)isPriorityCityBeingUpdated:(id)arg1;
- (bool)isPriorityForecastOperationsEnabled;
- (id)locationGeocodingSampler;
- (id)priorityCompletionHandlersForCity;
- (id)priorityForecastOperationQueue;
- (id)priorityUpdatingCities;
- (void)setCompletionHandlerQueue:(id)arg1;
- (void)setCompletionHandlersForCity:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setForecastOperationQueue:(id)arg1;
- (void)setGreenTeaLogger:(struct ct_green_tea_logger_s { }*)arg1;
- (void)setIncomingRequestQueue:(id)arg1;
- (void)setLocationGeocodingSampler:(id)arg1;
- (void)setPriorityCompletionHandlersForCity:(id)arg1;
- (void)setPriorityForecastOperationQueue:(id)arg1;
- (void)setPriorityUpdatingCities:(id)arg1;
- (void)setTrackingParameter:(id)arg1;
- (void)setUpdatingCities:(id)arg1;
- (id)store;
- (id)trackingParameter;
- (id)updatingCities;

@end
