
@interface GEOComposedEnrouteNotice : NSObject <NSSecureCoding> {
    GEOEnrouteNotice * _enrouteNotice;
    NSArray * _guidanceEvents;
    struct { 
        unsigned int index; 
        float offset; 
    }  _routeCoordinate;
}

@property (nonatomic, readonly) unsigned int groupIdentifier;
@property (nonatomic, readonly) unsigned int groupItemHorizontalDisplayOrder;
@property (nonatomic, readonly) unsigned int groupItemVerticalDisplayOrder;
@property (nonatomic, readonly) NSArray *guidanceEvents;
@property (nonatomic, readonly) bool hasGroupIdentifier;
@property (nonatomic, readonly) bool hasGroupItemHorizontalDisplayOrder;
@property (nonatomic, readonly) bool hasGroupItemVerticalDisplayOrder;
@property (nonatomic, readonly) bool hasHighlightDistance;
@property (nonatomic, readonly) bool hasPriority;
@property (nonatomic, readonly) unsigned int highlightDistance;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) int noticeType;
@property (nonatomic, readonly) GEOLatLng *position;
@property (nonatomic, readonly) unsigned int priority;
@property (nonatomic, readonly) GEOComposedRouteAnnotation *routeAnnotation;
@property (nonatomic, readonly) struct { unsigned int x1; float x2; } routeCoordinate;
@property (nonatomic, readonly) GEOComposedTrafficCamera *trafficCamera;
@property (nonatomic, readonly) GEOComposedTrafficSignal *trafficSignal;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)groupIdentifier;
- (unsigned int)groupItemHorizontalDisplayOrder;
- (unsigned int)groupItemVerticalDisplayOrder;
- (id)guidanceEvents;
- (bool)hasGroupIdentifier;
- (bool)hasGroupItemHorizontalDisplayOrder;
- (bool)hasGroupItemVerticalDisplayOrder;
- (bool)hasHighlightDistance;
- (bool)hasPriority;
- (unsigned int)highlightDistance;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithEnrouteNotice:(id)arg1 enrouteNoticeIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3 onRoute:(id)arg4;
- (id)initWithEnrouteNotice:(id)arg1 enrouteNoticeIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3 onRoute:(id)arg4 withPolylineCoordinate:(struct { unsigned int x1; float x2; })arg5;
- (id)initWithEnrouteNotice:(id)arg1 enrouteNoticeIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3 onRoute:(id)arg4 withPosition:(id)arg5;
- (int)noticeType;
- (unsigned int)priority;
- (id)routeAnnotation;
- (struct { unsigned int x1; float x2; })routeCoordinate;
- (id)trafficCamera;
- (id)trafficSignal;

@end
