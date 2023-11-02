
@interface GEOServiceRequestDefaultConfig : NSObject <GEOServiceRequestConfiguring>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)additionalHTTPHeaders;
- (id)additionalURLQueryItems;
- (struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })dataRequestKindForRequest:(id)arg1 traits:(id)arg2;
- (id)debugRequestName;
- (id)serviceTypeNumber;
- (bool)supportsOffline;
- (unsigned long long)urlType;

@end
