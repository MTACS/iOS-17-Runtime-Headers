
@interface WBSRemoteHistorySession : NSObject <NSSecureCoding> {
    NSDate * _endDate;
    NSArray * _items;
    NSDate * _startDate;
}

@property (getter=isCurrentSession, readonly) bool currentSession;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly, copy) NSArray *items;
@property (nonatomic, readonly) NSDate *startDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 items:(id)arg3;
- (bool)isCurrentSession;
- (bool)isEqual:(id)arg1;
- (id)items;
- (id)startDate;

@end
