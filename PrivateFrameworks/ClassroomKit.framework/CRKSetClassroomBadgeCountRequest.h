
@interface CRKSetClassroomBadgeCountRequest : CATTaskRequest {
    long long  _badgeCount;
}

@property (nonatomic) long long badgeCount;

+ (bool)supportsSecureCoding;

- (long long)badgeCount;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setBadgeCount:(long long)arg1;

@end
