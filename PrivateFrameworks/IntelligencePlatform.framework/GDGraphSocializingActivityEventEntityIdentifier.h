
@interface GDGraphSocializingActivityEventEntityIdentifier : GDEntityIdentifier <GDGraphEntityIdentifier>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)description;
- (id)graphSocializingActivityEventFromContext:(id)arg1 error:(id*)arg2;
- (id)initByCastingFrom:(id)arg1;
- (id)initFromGDEntityIdentifier:(id)arg1;
- (id)initWithEntityIdentifier:(id)arg1;

@end
