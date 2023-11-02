
@interface WFCachedDonations : NSObject {
    unsigned long long  _ballpark;
    NSArray * _donations;
    NSDate * _fetchDate;
}

@property (nonatomic, readonly) unsigned long long ballpark;
@property (nonatomic, readonly) NSArray *donations;
@property (nonatomic, readonly) NSDate *fetchDate;

- (void).cxx_destruct;
- (unsigned long long)ballpark;
- (id)donations;
- (id)fetchDate;
- (id)initWithDonations:(id)arg1 ballpark:(unsigned long long)arg2;
- (bool)isValidWithBallpark:(unsigned long long)arg1;

@end
