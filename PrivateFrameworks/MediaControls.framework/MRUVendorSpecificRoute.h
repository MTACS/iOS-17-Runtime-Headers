
@interface MRUVendorSpecificRoute : MPAVRoute {
    DADevice * _device;
    bool  _expanded;
    bool  _isPicked;
    bool  _isPreferredRoute;
    UIImage * _protocolIcon;
    NSString * _protocolName;
    bool  _shouldBeDisplayed;
    NSMutableDictionary * _subrouteMap;
    MRUVendorSpecificRoute * _tempPreferredSubrouteOverride;
    MPAVRoute * _underlyingNativeRoute;
}

@property (nonatomic, readonly) DADevice *device;
@property (nonatomic, readonly) NSArray *endpoints;
@property (nonatomic) bool expanded;
@property (nonatomic, readonly) bool isGroup;
@property (nonatomic) bool isPicked;
@property (nonatomic) bool isPreferredRoute;
@property (nonatomic, readonly) MRUVendorSpecificRoute *preferredSubroute;
@property (nonatomic, readonly) UIImage *protocolIcon;
@property (nonatomic, readonly) NSString *protocolIdentifier;
@property (nonatomic, readonly) NSString *protocolName;
@property (nonatomic) bool shouldBeDisplayed;
@property (nonatomic, retain) NSMutableDictionary *subrouteMap;
@property (nonatomic, readonly) NSArray *subroutes;
@property (nonatomic, retain) MRUVendorSpecificRoute *tempPreferredSubrouteOverride;
@property (nonatomic, retain) MPAVRoute *underlyingNativeRoute;
@property (nonatomic, readonly) long long vendorSpecificRouteType;

- (void).cxx_destruct;
- (void)addSubRoute:(id)arg1;
- (id)device;
- (id)endpoints;
- (bool)expanded;
- (id)initWithDevice:(id)arg1;
- (bool)isAirPlayRoute;
- (bool)isDisplayedAsPicked;
- (bool)isGroup;
- (bool)isKnown;
- (bool)isPicked;
- (bool)isPreferredRoute;
- (long long)moreCapableTypeBetween:(long long)arg1 otherType:(long long)arg2;
- (id)preferredSubroute;
- (id)protocolIcon;
- (id)protocolIdentifier;
- (id)protocolName;
- (id)routeName;
- (long long)routeSubtype;
- (long long)routeType;
- (id)routeUID;
- (void)setExpanded:(bool)arg1;
- (void)setIsPicked:(bool)arg1;
- (void)setIsPreferredRoute:(bool)arg1;
- (void)setShouldBeDisplayed:(bool)arg1;
- (void)setSubrouteMap:(id)arg1;
- (void)setTempPreferredSubrouteOverride:(id)arg1;
- (void)setUnderlyingNativeRoute:(id)arg1;
- (bool)shouldBeDisplayed;
- (id)subrouteMap;
- (id)subroutes;
- (bool)supportsAirPlayGrouping;
- (bool)supportsGrouping;
- (id)tempPreferredSubrouteOverride;
- (id)underlyingNativeRoute;
- (long long)vendorSpecificRouteType;

@end
