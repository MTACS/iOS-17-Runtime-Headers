
@protocol TBScorable <NSObject>

@required

- (<TBScore> *)popularityScore;
- (<TBScore> *)qualityScore;

@end
