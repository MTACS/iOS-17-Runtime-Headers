
@interface ATXTimeSection : NSObject <NSSecureCoding> {
    unsigned long long  _kind;
    ATXTime * _representedTimeRangeEnd;
    ATXTime * _representedTimeRangeStart;
    NSArray * _rows;
    NSString * _title;
}

@property (nonatomic, readonly) unsigned long long kind;
@property (nonatomic, readonly) ATXTime *representedTimeRangeEnd;
@property (nonatomic, readonly) ATXTime *representedTimeRangeStart;
@property (nonatomic, readonly, copy) NSArray *rows;
@property (nonatomic, readonly, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRows:(id)arg1 title:(id)arg2 kind:(unsigned long long)arg3;
- (id)initWithRows:(id)arg1 title:(id)arg2 kind:(unsigned long long)arg3 representedTimeRangeStart:(id)arg4 representedTimeRangeEnd:(id)arg5;
- (unsigned long long)kind;
- (id)representedTimeRangeEnd;
- (id)representedTimeRangeStart;
- (id)rows;
- (id)title;

@end
