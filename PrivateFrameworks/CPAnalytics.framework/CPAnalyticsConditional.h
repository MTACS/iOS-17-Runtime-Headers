
@interface CPAnalyticsConditional : NSObject {
    NSPredicate * _predicate;
    NSString * _property;
}

@property (nonatomic, readonly) NSPredicate *predicate;
@property (nonatomic, readonly) NSString *property;

- (void).cxx_destruct;
- (id)_validateAndParseConfig:(id)arg1 forKey:(id)arg2;
- (id)initWithConfig:(id)arg1;
- (id)predicate;
- (id)property;

@end
