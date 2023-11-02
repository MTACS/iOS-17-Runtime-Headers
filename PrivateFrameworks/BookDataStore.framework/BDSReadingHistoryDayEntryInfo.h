
@interface BDSReadingHistoryDayEntryInfo : NSObject <NSCopying, NSSecureCoding> {
    NSString * _date;
    BDSReadingHistoryDayInfo * _day;
}

@property (nonatomic, copy) NSString *date;
@property (nonatomic, retain) BDSReadingHistoryDayInfo *day;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)day;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1 day:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setDay:(id)arg1;

@end
