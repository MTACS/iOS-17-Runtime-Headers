
@interface ATXInterruptionManagerAppSuggestions : NSObject <NSCopying, NSSecureCoding> {
    NSMutableArray * _candidateApps;
    NSMutableArray * _recommendedApps;
}

@property (nonatomic, readonly) NSArray *candidateApps;
@property (nonatomic, readonly) NSArray *recommendedApps;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addCandidateApp:(id)arg1;
- (void)addRecommendedApp:(id)arg1;
- (id)candidateApps;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecommendedApps:(id)arg1 candidateApps:(id)arg2;
- (id)recommendedApps;

@end
