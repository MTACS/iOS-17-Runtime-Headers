
@interface WFCategoryJudgement : NSObject {
    long long  category;
    float  score;
}

+ (id)categoryJudgementWithCategory:(long long)arg1 score:(float)arg2;

- (long long)category;
- (long long)compareByCategory:(id)arg1;
- (long long)compareByScore:(id)arg1;
- (id)description;
- (float)score;
- (void)setCategory:(long long)arg1;
- (void)setScore:(float)arg1;

@end
