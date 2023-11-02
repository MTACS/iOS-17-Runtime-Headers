
@interface WFHealthIssue : NSObject {
    unsigned long long  _category;
    bool  _chinaDevice;
    NSString * _issueDescription;
    NSString * _issueRecommendation;
    NSString * _issueShortTitle;
    NSString * _issueTitle;
    bool  _overrideIssue;
    bool  _subtitleOnlyIssue;
    unsigned long long  _type;
    NSString * _typeString;
}

@property (nonatomic) unsigned long long category;
@property (nonatomic) bool chinaDevice;
@property (nonatomic, copy) NSString *issueDescription;
@property (nonatomic, readonly) NSString *issueDetailText;
@property (nonatomic, copy) NSString *issueRecommendation;
@property (nonatomic, copy) NSString *issueShortTitle;
@property (nonatomic, copy) NSString *issueTitle;
@property (nonatomic) bool overrideIssue;
@property (nonatomic, readonly) bool subtitleOnlyIssue;
@property (nonatomic) unsigned long long type;
@property (nonatomic, readonly, copy) NSString *typeString;

+ (id /* block */)healthIssueSortComparator;
+ (id)highestPriorityIssueFromIssues:(id)arg1;
+ (id)issueWithType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (unsigned long long)_categoryForType:(unsigned long long)arg1;
- (id)_descriptionForType:(unsigned long long)arg1;
- (id)_recommendationForType:(unsigned long long)arg1;
- (id)_shortTitleForType:(unsigned long long)arg1;
- (id)_titleForType:(unsigned long long)arg1;
- (id)_typeStringForType:(unsigned long long)arg1;
- (unsigned long long)category;
- (bool)chinaDevice;
- (id)description;
- (unsigned long long)hash;
- (id)initWithType:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToHealthIssue:(id)arg1;
- (id)issueDescription;
- (id)issueDetailText;
- (id)issueRecommendation;
- (id)issueShortTitle;
- (id)issueTitle;
- (bool)overrideIssue;
- (void)setCategory:(unsigned long long)arg1;
- (void)setChinaDevice:(bool)arg1;
- (void)setIssueDescription:(id)arg1;
- (void)setIssueRecommendation:(id)arg1;
- (void)setIssueShortTitle:(id)arg1;
- (void)setIssueTitle:(id)arg1;
- (void)setOverrideIssue:(bool)arg1;
- (void)setType:(unsigned long long)arg1;
- (bool)subtitleOnlyIssue;
- (unsigned long long)type;
- (id)typeString;

@end
