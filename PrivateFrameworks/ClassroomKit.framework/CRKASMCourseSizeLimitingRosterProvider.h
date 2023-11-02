
@interface CRKASMCourseSizeLimitingRosterProvider : CRKASMRosterProviderDecoratorBase {
    long long  _maxTrustedUserCount;
    long long  _maxUserCount;
}

@property (nonatomic, readonly) long long maxTrustedUserCount;
@property (nonatomic, readonly) long long maxUserCount;

- (id)courseForIdentifier:(id)arg1;
- (void)createCourseWithProperties:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithRosterProvider:(id)arg1 maxUserCount:(long long)arg2 maxTrustedUserCount:(long long)arg3;
- (bool)isLegalToUpdateCourse:(id)arg1 withProperties:(id)arg2 error:(id*)arg3;
- (long long)maxTrustedUserCount;
- (long long)maxUserCount;
- (void)updateCourseWithIdentifier:(id)arg1 properties:(id)arg2 completion:(id /* block */)arg3;

@end
