
@interface GDMicroLocationVisitEvent : NSObject {
    NSDate * _date;
    bool  _isEnter;
    NSString * _microLocationIdentifier;
    double  _probability;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) bool isEnter;
@property (nonatomic, readonly) NSString *microLocationIdentifier;
@property (nonatomic, readonly) double probability;

- (void).cxx_destruct;
- (id)date;
- (id)initWithDate:(id)arg1 microLocationIdentifier:(id)arg2 probability:(double)arg3 isEnter:(bool)arg4;
- (bool)isEnter;
- (bool)isEqual:(id)arg1;
- (id)microLocationIdentifier;
- (double)probability;

@end
