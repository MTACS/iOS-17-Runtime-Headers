
@interface MNDisplayETAInfo : NSObject <NSSecureCoding> {
    NSDate * _etaToEndOfRoute;
    NSArray * _legInfos;
    unsigned long long  _remainingMinutesToEndOfRoute;
    NSUUID * _routeID;
}

@property (nonatomic, readonly) NSDate *displayETAToEndOfLeg;
@property (nonatomic, readonly) NSDate *displayETAToEndOfRoute;
@property (nonatomic, readonly) unsigned long long displayRemainingMinutesToEndOfLeg;
@property (nonatomic, readonly) unsigned long long displayRemainingMinutesToEndOfRoute;
@property (nonatomic, retain) NSDate *etaToEndOfRoute;
@property (nonatomic, readonly) unsigned long long legIndex;
@property (nonatomic, retain) NSArray *legInfos;
@property (nonatomic) unsigned long long remainingMinutesToEndOfRoute;
@property (nonatomic, retain) NSUUID *routeID;

+ (id)dateFormatter;
+ (id)displayETAInfoForRouteInfo:(id)arg1 routeCoordinate:(struct { unsigned int x1; float x2; })arg2;
+ (bool)isDisplayDate:(id)arg1 equalTo:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)displayETAToEndOfLeg;
- (id)displayETAToEndOfRoute;
- (unsigned long long)displayRemainingMinutesToEndOfLeg;
- (unsigned long long)displayRemainingMinutesToEndOfRoute;
- (void)encodeWithCoder:(id)arg1;
- (id)etaToEndOfRoute;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayETAToEndOfLeg:(id)arg1 displayRemainingMinutesToEndOfLeg:(unsigned long long)arg2 displayETAToEndOfRoute:(id)arg3 displayRemainingMinutesToEndOfRoute:(unsigned long long)arg4;
- (bool)isEqual:(id)arg1;
- (unsigned long long)legIndex;
- (id)legInfos;
- (unsigned long long)remainingMinutesToEndOfRoute;
- (id)routeID;
- (void)setEtaToEndOfRoute:(id)arg1;
- (void)setLegInfos:(id)arg1;
- (void)setRemainingMinutesToEndOfRoute:(unsigned long long)arg1;
- (void)setRouteID:(id)arg1;

@end
