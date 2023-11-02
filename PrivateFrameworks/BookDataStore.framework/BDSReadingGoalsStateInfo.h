
@interface BDSReadingGoalsStateInfo : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _booksFinishedGoal;
    NSNumber * _streakDayGoal;
}

@property (nonatomic, retain) NSNumber *booksFinishedGoal;
@property (nonatomic, retain) NSNumber *streakDayGoal;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)booksFinishedGoal;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBooksFinishedGoal:(id)arg1 streakDayGoal:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setBooksFinishedGoal:(id)arg1;
- (void)setStreakDayGoal:(id)arg1;
- (id)streakDayGoal;

@end
