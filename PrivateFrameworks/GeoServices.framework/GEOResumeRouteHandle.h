
@interface GEOResumeRouteHandle : NSObject <NSSecureCoding> {
    bool  _hasVisitedFirstStop;
    GEOOriginalWaypointRoute * _routeGeometry;
    NSData * _serverSessionState;
}

@property (nonatomic) bool hasVisitedFirstStop;
@property (nonatomic, retain) GEOOriginalWaypointRoute *routeGeometry;
@property (nonatomic, retain) NSData *serverSessionState;

+ (id)resumeRouteHandleStorageFromResumeRouteHandle:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasVisitedFirstStop;
- (id)initWithCoder:(id)arg1;
- (id)initWithGEOStorageResumeRouteHandle:(id)arg1;
- (id)resumeRouteHandleStorage;
- (id)routeGeometry;
- (id)serverSessionState;
- (void)setHasVisitedFirstStop:(bool)arg1;
- (void)setRouteGeometry:(id)arg1;
- (void)setServerSessionState:(id)arg1;

@end
