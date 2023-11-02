
@interface ATXCompactTimeSummary : NSObject <NSSecureCoding> {
    NSArray * _timeMarbles;
}

@property (nonatomic, readonly, copy) NSArray *timeMarbles;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimeMarbles:(id)arg1;
- (id)timeMarbles;

@end
