
@interface MRMediaControlsConfiguration : NSObject <NSCopying, NSSecureCoding> {
    bool  _allowsNowPlayingApplicationLaunch;
    NSMutableArray * _customRows;
    long long  _initiatorStyle;
    NSString * _nowPlayingAppBundleID;
    double  _preferredWidth;
    NSString * _presentingAppBundleID;
    int  _presentingAppProcessIdentifier;
    NSString * _routeUID;
    NSString * _routingContextUID;
    bool  _shouldPreventAutorotation;
    bool  _sortByIsVideoRoute;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sourceRect;
    long long  _style;
    bool  _useGenericDevicesIconInHeader;
    NSArray * _visibleMediaApps;
}

@property (nonatomic) bool allowsNowPlayingApplicationLaunch;
@property (nonatomic, copy) NSMutableArray *customRows;
@property (nonatomic) long long initiatorStyle;
@property (nonatomic, copy) NSString *nowPlayingAppBundleID;
@property (nonatomic) double preferredWidth;
@property (nonatomic, copy) NSString *presentingAppBundleID;
@property (nonatomic) int presentingAppProcessIdentifier;
@property (nonatomic, copy) NSString *routeUID;
@property (nonatomic, copy) NSString *routingContextUID;
@property (nonatomic) bool shouldPreventAutorotation;
@property (nonatomic) bool sortByIsVideoRoute;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sourceRect;
@property (nonatomic) long long style;
@property (nonatomic) bool useGenericDevicesIconInHeader;
@property (nonatomic, copy) NSArray *visibleMediaApps;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowsNowPlayingApplicationLaunch;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customRows;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)initiatorStyle;
- (bool)isEqual:(id)arg1;
- (id)nowPlayingAppBundleID;
- (double)preferredWidth;
- (id)presentingAppBundleID;
- (int)presentingAppProcessIdentifier;
- (id)routeUID;
- (id)routingContextUID;
- (void)setAllowsNowPlayingApplicationLaunch:(bool)arg1;
- (void)setCustomRows:(id)arg1;
- (void)setInitiatorStyle:(long long)arg1;
- (void)setNowPlayingAppBundleID:(id)arg1;
- (void)setPreferredWidth:(double)arg1;
- (void)setPresentingAppBundleID:(id)arg1;
- (void)setPresentingAppProcessIdentifier:(int)arg1;
- (void)setRouteUID:(id)arg1;
- (void)setRoutingContextUID:(id)arg1;
- (void)setShouldPreventAutorotation:(bool)arg1;
- (void)setSortByIsVideoRoute:(bool)arg1;
- (void)setSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setStyle:(long long)arg1;
- (void)setUseGenericDevicesIconInHeader:(bool)arg1;
- (void)setVisibleMediaApps:(id)arg1;
- (bool)shouldPreventAutorotation;
- (bool)sortByIsVideoRoute;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceRect;
- (long long)style;
- (bool)useGenericDevicesIconInHeader;
- (id)visibleMediaApps;

@end
