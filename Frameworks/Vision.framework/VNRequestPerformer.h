
@interface VNRequestPerformer : NSObject <VNRequestCancelling> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _requestLock;
    NSMutableArray * _requestsInFlight;
    NSMutableArray * _requestsPending;
    NSMutableDictionary * _sequencedRequestObservations;
    NSMutableSet * _trackersInFlight;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _trackersInFlightLock;
}

+ (id)_requestPerformingQueuePriorityGroup1;
+ (id)_requestPerformingQueuePriorityGroup2;

- (void).cxx_destruct;
- (void)_groupOrderedRequests:(id)arg1 ordinality:(id)arg2 ordinalityAndPriorityGroups:(id)arg3;
- (void)_groupsRequestsWithTheSameOrdinality:(id)arg1 priorityGroup1:(id)arg2 priorityGroup2:(id)arg3;
- (bool)_performOrderedRequests:(id)arg1 inContext:(id)arg2 error:(id*)arg3;
- (bool)_performRequests:(id)arg1 onBehalfOfRequest:(id)arg2 inContext:(id)arg3 error:(id*)arg4;
- (bool)_validateAndPrepareRequests:(id)arg1 error:(id*)arg2;
- (void)cancelAllRequests;
- (id)dependencyAnalyzedRequestsForRequests:(id)arg1 withPerformingContext:(id)arg2 error:(id*)arg3;
- (id)getCurrentTrackersAndReset;
- (id)init;
- (id)orderedRequestsForRequests:(id)arg1;
- (bool)performDependentRequests:(id)arg1 onBehalfOfRequest:(id)arg2 inContext:(id)arg3 error:(id*)arg4;
- (bool)performRequests:(id)arg1 inContext:(id)arg2 error:(id*)arg3;
- (id)previousSequencedObservationsForRequest:(id)arg1;
- (void)recordSequencedObservationsForRequest:(id)arg1;
- (void)recordTracker:(id)arg1;

@end
