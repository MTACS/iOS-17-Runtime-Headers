
@interface MRStaticRouteBannerRequest : NSObject <NSSecureCoding> {
    NSArray * _outputDeviceNames;
    NSString * _routeIdentifier;
    NSString * _routeName;
    NSString * _routeSymbolName;
    NSString * _soloDeviceEnclosureColor;
    NSString * _soloModelID;
}

@property (nonatomic, retain) NSArray *outputDeviceNames;
@property (nonatomic, retain) NSString *routeIdentifier;
@property (nonatomic, retain) NSString *routeName;
@property (nonatomic, retain) NSString *routeSymbolName;
@property (nonatomic, retain) NSString *soloDeviceEnclosureColor;
@property (nonatomic, retain) NSString *soloModelID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)outputDeviceNames;
- (id)routeIdentifier;
- (id)routeName;
- (id)routeSymbolName;
- (void)setOutputDeviceNames:(id)arg1;
- (void)setRouteIdentifier:(id)arg1;
- (void)setRouteName:(id)arg1;
- (void)setRouteSymbolName:(id)arg1;
- (void)setSoloDeviceEnclosureColor:(id)arg1;
- (void)setSoloModelID:(id)arg1;
- (id)soloDeviceEnclosureColor;
- (id)soloModelID;

@end
