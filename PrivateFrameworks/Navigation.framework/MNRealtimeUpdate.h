
@interface MNRealtimeUpdate : NSObject <NSSecureCoding> {
    NSError * _error;
    NSDate * _lastUpdated;
    NSUUID * _routeID;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSDate *lastUpdated;
@property (nonatomic, readonly) NSUUID *routeID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (id)lastUpdated;
- (id)routeID;

@end
