
@interface VNRequestPerformingContext : NSObject <VNImageBufferProviding> {
    VNImageBuffer * _imageBuffer_DO_NOT_DIRECTLY_ACCESS;
    VNObservationsCache * _observationsCache;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _observationsCacheLock;
    unsigned int  _qosClass;
    VNRequestForensics * _requestForensics;
    NSMapTable * _requestToObservationsCacheKeyMap;
    unsigned long long  _serialNumber;
    VNSession * _session;
    VNRequestPerformer * _weakRequestPerformer;
}

@property (readonly) unsigned long long serialNumber;
@property (readonly) VNSession *session;

- (void).cxx_destruct;
- (id)_observationsCacheKeyForRequest:(id)arg1;
- (bool)cacheObservationsOfRequest:(id)arg1;
- (id)cachedObservationsAcceptedByRequest:(id)arg1;
- (id)imageBufferAndReturnError:(id*)arg1;
- (id)initWithSession:(id)arg1 requestPerformer:(id)arg2 imageBuffer:(id)arg3 forensics:(id)arg4 observationsCache:(id)arg5;
- (id)initWithSession:(id)arg1 requestPerformer:(id)arg2 imageBuffer:(id)arg3 forensics:(id)arg4 observationsCache:(id)arg5 qosClass:(unsigned int)arg6;
- (id)previousSequencedObservationsAcceptedByRequest:(id)arg1;
- (unsigned int)qosClass;
- (void)recordSequencedObservationsOfRequest:(id)arg1;
- (id)requestForensics;
- (id)requestPerformerAndReturnError:(id*)arg1;
- (unsigned long long)serialNumber;
- (id)session;

@end
