
@interface WFCoercionContext : NSObject {
    WFCoercionOptions * _options;
    WFType * _requestedType;
}

@property (nonatomic, readonly) WFCoercionOptions *options;
@property (nonatomic, readonly) WFType *requestedType;

- (void).cxx_destruct;
- (id)initWithRequestedType:(id)arg1 options:(id)arg2;
- (id)options;
- (id)requestedType;

@end
