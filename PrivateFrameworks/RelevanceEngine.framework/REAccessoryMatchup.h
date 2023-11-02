
@interface REAccessoryMatchup : NSObject <NSCopying, NSSecureCoding> {
    NSString * _awayTeamDetail;
    REImage * _awayTeamImage;
    NSString * _awayTeamName;
    NSString * _homeTeamDetail;
    REImage * _homeTeamImage;
    NSString * _homeTeamName;
    NSDate * _matchupDateFetched;
    NSString * _matchupProgress;
    NSDate * _matchupStartDate;
    unsigned long long  _status;
}

@property (nonatomic, readonly) NSString *awayTeamDetail;
@property (nonatomic, readonly) REImage *awayTeamImage;
@property (nonatomic, readonly) NSString *awayTeamName;
@property (nonatomic, readonly) NSString *homeTeamDetail;
@property (nonatomic, readonly) REImage *homeTeamImage;
@property (nonatomic, readonly) NSString *homeTeamName;
@property (nonatomic, readonly) NSDate *matchupDateFetched;
@property (nonatomic, readonly) NSString *matchupProgress;
@property (nonatomic, readonly) NSDate *matchupStartDate;
@property (nonatomic, readonly) unsigned long long status;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)awayTeamDetail;
- (id)awayTeamImage;
- (id)awayTeamName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)homeTeamDetail;
- (id)homeTeamImage;
- (id)homeTeamName;
- (id)initWithCoder:(id)arg1;
- (id)initWithHomeTeamImage:(id)arg1 homeTeamName:(id)arg2 homeTeamDetail:(id)arg3 awayTeamImage:(id)arg4 awayTeamName:(id)arg5 awayTeamDetail:(id)arg6 progress:(id)arg7 startDate:(id)arg8 status:(unsigned long long)arg9 dateFetched:(id)arg10;
- (id)matchupDateFetched;
- (id)matchupProgress;
- (id)matchupStartDate;
- (unsigned long long)status;

@end
