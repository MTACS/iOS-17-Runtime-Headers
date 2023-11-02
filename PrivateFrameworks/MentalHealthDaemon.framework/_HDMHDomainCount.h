
@interface _HDMHDomainCount : NSObject {
    long long  _count;
    NSDate * _mostRecentDate;
}

@property (nonatomic) long long count;
@property (nonatomic, retain) NSDate *mostRecentDate;

- (void).cxx_destruct;
- (long long)count;
- (id)initWithCount:(long long)arg1 mostRecentDate:(id)arg2;
- (id)mostRecentDate;
- (void)setCount:(long long)arg1;
- (void)setMostRecentDate:(id)arg1;

@end
