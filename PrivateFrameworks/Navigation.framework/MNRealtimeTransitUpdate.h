
@interface MNRealtimeTransitUpdate : MNRealtimeUpdate <NSSecureCoding> {
    GEOTransitRouteUpdate * _transitUpdate;
}

@property (nonatomic, readonly) GEOTransitRouteUpdate *transitUpdate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTransitRouteUpdate:(id)arg1;
- (id)routeID;
- (id)transitUpdate;

@end
