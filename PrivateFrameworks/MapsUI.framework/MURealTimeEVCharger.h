
@interface MURealTimeEVCharger : NSObject {
    unsigned long long  _available;
    int  _status;
    unsigned long long  _total;
}

@property (nonatomic, readonly) unsigned long long available;
@property (nonatomic, readonly) int status;
@property (nonatomic, readonly) unsigned long long total;

- (unsigned long long)available;
- (id)initWithAvailable:(unsigned long long)arg1 total:(unsigned long long)arg2 status:(int)arg3;
- (int)status;
- (unsigned long long)total;

@end
