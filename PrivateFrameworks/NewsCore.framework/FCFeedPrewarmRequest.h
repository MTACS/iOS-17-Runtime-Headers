
@interface FCFeedPrewarmRequest : NSObject <NSCopying> {
    FCEdgeCacheHint * _edgeCacheHint;
    NSArray * _feedRequests;
    long long  _options;
    NSObject<NSCopying> * _requestKey;
}

@property (nonatomic, readonly, copy) FCEdgeCacheHint *edgeCacheHint;
@property (nonatomic, readonly, copy) NSArray *feedRequests;
@property (nonatomic, readonly) long long options;
@property (nonatomic, readonly, copy) NSObject<NSCopying> *requestKey;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)edgeCacheHint;
- (id)feedRequests;
- (unsigned long long)hash;
- (id)initWithRequestKey:(id)arg1 feedRequests:(id)arg2 options:(long long)arg3 edgeCacheHint:(id)arg4;
- (bool)isEqual:(id)arg1;
- (long long)options;
- (id)requestKey;

@end
