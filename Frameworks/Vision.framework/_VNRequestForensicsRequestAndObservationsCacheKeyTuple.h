
@interface _VNRequestForensicsRequestAndObservationsCacheKeyTuple : NSObject {
    <NSObject><NSCopying> * _observationsCacheKey;
    VNRequest * _request;
}

@property (nonatomic, readonly) <NSObject><NSCopying> *observationsCacheKey;
@property (nonatomic, readonly) VNRequest *request;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithRequest:(id)arg1 observationsCacheKey:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)observationsCacheKey;
- (id)request;

@end
