
@interface ICASEnabledFiltersArrayData : NSObject <AADataEventType> {
    NSString * _filterType;
    NSString * _filterValue;
}

@property (nonatomic, readonly) NSString *filterType;
@property (nonatomic, readonly) NSString *filterValue;

+ (id)dataName;

- (void).cxx_destruct;
- (id)filterType;
- (id)filterValue;
- (id)initWithFilterType:(id)arg1 filterValue:(id)arg2;
- (id)toDict;

@end
