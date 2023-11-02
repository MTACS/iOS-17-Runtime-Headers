
@interface PHACoreDuetDatasetSample : NSObject {
    NSDate * _date;
    NSString * _identifier;
    NSString * _subset;
}

@property (nonatomic, retain) NSDate *date;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *subset;

- (void).cxx_destruct;
- (id)date;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 andDate:(id)arg2 forSubset:(id)arg3;
- (void)setDate:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setSubset:(id)arg1;
- (id)subset;

@end
