
@interface MPModelShimRequest : MPRequest {
    MPModelRequest * _modelRequest;
}

@property (nonatomic, retain) MPModelRequest *modelRequest;

+ (Class)responseClass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)middlewareClasses;
- (id)modelRequest;
- (void)setModelRequest:(id)arg1;

@end
