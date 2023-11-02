
@interface DSDateFormatter : NSObject {
    NSMutableDictionary * _dateFormatters;
}

@property (nonatomic, retain) NSMutableDictionary *dateFormatters;

+ (id)sharedFormatter;

- (void).cxx_destruct;
- (id)dateFormatters;
- (id)formatterWithType:(long long)arg1;
- (id)init;
- (void)setDateFormatters:(id)arg1;

@end
