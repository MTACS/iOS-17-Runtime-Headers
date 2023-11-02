
@interface VKUserReportedTrafficIncident : VKTrafficFeature {
    long long  _type;
}

@property (nonatomic, readonly) long long type;

- (id)initWithIncidentType:(long long)arg1 uniqueIdentifier:(id)arg2 position:(struct { double x1; double x2; double x3; })arg3 onRoute:(id)arg4;
- (long long)type;

@end
