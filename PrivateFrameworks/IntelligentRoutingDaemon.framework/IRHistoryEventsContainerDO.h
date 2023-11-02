
@interface IRHistoryEventsContainerDO : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _historyEvents;
}

@property (nonatomic, readonly) NSArray *historyEvents;

+ (id)historyEventsContainerDOWithHistoryEvents:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithReplacementHistoryEvents:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)historyEvents;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithHistoryEvents:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToHistoryEventsContainerDO:(id)arg1;

@end
