
@interface _VNRequestForensicsParentChildRequests : NSObject {
    NSArray * _orderedChildRequests;
    VNRequest * _parentRequest;
}

@property (nonatomic, readonly, copy) NSArray *orderedChildRequests;
@property (nonatomic, readonly) VNRequest *parentRequest;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithParentRequest:(id)arg1 orderedChildRequests:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)orderedChildRequests;
- (id)parentRequest;

@end
