
@interface MPAVOutputDeviceDescription : NSObject {
    NSString * _modelID;
    long long  _routeSubtype;
    long long  _routeType;
    NSString * _uid;
}

@property (nonatomic, readonly) NSString *modelID;
@property (nonatomic, readonly) long long routeSubtype;
@property (nonatomic, readonly) long long routeType;
@property (nonatomic, readonly) NSString *uid;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithDeviceType:(long long)arg1 deviceSubtype:(long long)arg2 uid:(id)arg3;
- (id)initWithDeviceType:(long long)arg1 deviceSubtype:(long long)arg2 uid:(id)arg3 modelID:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)modelID;
- (long long)routeSubtype;
- (long long)routeType;
- (id)uid;

@end
