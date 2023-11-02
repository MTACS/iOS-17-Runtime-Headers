
@interface MTRActionsClusterEndpointListStruct : NSObject <NSCopying> {
    NSNumber * _endpointListID;
    NSArray * _endpoints;
    NSString * _name;
    NSNumber * _type;
}

@property (nonatomic, copy) NSNumber *endpointListID;
@property (nonatomic, copy) NSArray *endpoints;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSNumber *type;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)endpointListID;
- (id)endpoints;
- (id)init;
- (id)name;
- (void)setEndpointListID:(id)arg1;
- (void)setEndpoints:(id)arg1;
- (void)setName:(id)arg1;
- (void)setType:(id)arg1;
- (id)type;

@end
