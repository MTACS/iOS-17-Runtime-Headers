
@interface HealthAppDataTypeDetailLinkBuilder : HealthAppLinkBuilder

- (id)URLForDataTypeDetailWithObjectType:(id)arg1;
- (id)URLForDataTypeDetailWithObjectType:(id)arg1 date:(id)arg2;
- (id)URLForDataTypeDetailWithObjectType:(id)arg1 date:(id)arg2 trendOverlay:(long long)arg3;
- (id)URLForDataTypeDetailWithObjectType:(id)arg1 dateInterval:(id)arg2;
- (id)URLForDataTypeDetailWithObjectType:(id)arg1 dateInterval:(id)arg2 trendOverlay:(long long)arg3;
- (id)URLForDataTypeDetailWithObjectType:(id)arg1 trendOverlay:(long long)arg2;
- (id)baseURLComponentsWithObjectType:(id)arg1 trendOverlay:(long long)arg2;

@end
