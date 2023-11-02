
@interface MTREventRequestPath : NSObject <NSCopying> {
    NSNumber * _cluster;
    NSNumber * _endpoint;
    NSNumber * _event;
}

@property (nonatomic, readonly, copy) NSNumber *cluster;
@property (nonatomic, readonly, copy) NSNumber *endpoint;
@property (nonatomic, readonly, copy) NSNumber *event;

+ (id)requestPathWithEndpointID:(id)arg1 clusterID:(id)arg2 eventID:(id)arg3;

- (void).cxx_destruct;
- (id)cluster;
- (void)convertToEventPathParams:(struct EventPathParams { unsigned int x1; unsigned int x2; unsigned short x3; bool x4; }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)endpoint;
- (id)event;
- (unsigned long long)hash;
- (id)initWithEndpointID:(id)arg1 clusterID:(id)arg2 eventID:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToEventRequestPath:(id)arg1;

@end
