
@protocol NCBadging <NSObject>

@required

- (unsigned long long)badgeLocation;
- (long long)badgeType;
- (NCBadgedIconView *)badgedIconView;
- (void)setBadgeLocation:(unsigned long long)arg1;
- (void)setBadgedIconView:(NCBadgedIconView *)arg1;

@end
