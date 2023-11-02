
@interface MKMapItemRequest : NSObject {
    bool  _cancelled;
    MKMapFeatureAnnotation * _featureAnnotation;
    bool  _loading;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _stateLock;
    <MKMapServiceTicket> * _ticket;
}

@property (getter=isCancelled, nonatomic, readonly) bool cancelled;
@property (nonatomic, readonly) MKMapFeatureAnnotation *featureAnnotation;
@property (getter=isLoading, nonatomic, readonly) bool loading;

- (void).cxx_destruct;
- (void)_handleMapItems:(id)arg1 error:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_performLookupRequestWithMapItemIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)cancel;
- (id)featureAnnotation;
- (void)getMapItemWithCompletionHandler:(id /* block */)arg1;
- (id)initWithMapFeatureAnnotation:(id)arg1;
- (bool)isCancelled;
- (bool)isLoading;

@end
