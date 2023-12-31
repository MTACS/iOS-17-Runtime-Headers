
@interface GEORouteHypothesisKey : NSObject <NSCopying, NSSecureCoding> {
    GEORouteHypothesisRequest * _request;
}

@property (nonatomic, readonly) GEORouteHypothesisRequest *request;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRouteHypothesisRequest:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)request;

@end
