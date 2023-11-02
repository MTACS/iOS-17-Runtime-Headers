
@interface MTRAttributeRequestPath : NSObject <NSCopying> {
    NSNumber * _attribute;
    NSNumber * _cluster;
    NSNumber * _endpoint;
}

@property (nonatomic, readonly, copy) NSNumber *attribute;
@property (nonatomic, readonly, copy) NSNumber *cluster;
@property (nonatomic, readonly, copy) NSNumber *endpoint;

+ (id)requestPathWithEndpointID:(id)arg1 clusterID:(id)arg2 attributeID:(id)arg3;

- (void).cxx_destruct;
- (id)attribute;
- (id)cluster;
- (void)convertToAttributePathParams:(struct AttributePathParams { unsigned int x1; unsigned int x2; unsigned short x3; unsigned short x4; }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)endpoint;
- (unsigned long long)hash;
- (id)initWithEndpointID:(id)arg1 clusterID:(id)arg2 attributeID:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAttributeRequestPath:(id)arg1;

@end
