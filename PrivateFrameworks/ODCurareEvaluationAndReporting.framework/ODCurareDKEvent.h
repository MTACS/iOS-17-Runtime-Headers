
@interface ODCurareDKEvent : NSObject {
    NSDate * _endDate;
    NSString * _identifier;
    NSArray * _metadata;
    NSDate * _startDate;
}

@property (readonly) NSDate *endDate;
@property (readonly) NSString *identifier;
@property (readonly, copy) NSArray *metadata;
@property (readonly) NSDate *startDate;

- (void).cxx_destruct;
- (id)endDate;
- (id)identifier;
- (id)initWithDKEvent:(id)arg1;
- (id)metadata;
- (id)startDate;

@end
