
@interface WLKServerRoute : NSObject {
    NSString * _host;
    NSString * _path;
    NSString * _requiredKVPType;
    bool  _requiresLocation;
    NSString * _routeName;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly, copy) NSString *host;
@property (nonatomic, readonly, copy) NSString *path;
@property (nonatomic, readonly) NSString *requiredKVPType;
@property (nonatomic, readonly) bool requiresLocation;
@property (nonatomic, readonly, copy) NSString *routeName;

- (void).cxx_destruct;
- (id)URL;
- (id)host;
- (id)initWithDictionary:(id)arg1 routeName:(id)arg2;
- (id)path;
- (id)requiredKVPType;
- (bool)requiresLocation;
- (id)routeName;

@end
