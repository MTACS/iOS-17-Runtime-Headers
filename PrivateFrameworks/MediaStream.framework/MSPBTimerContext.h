
@interface MSPBTimerContext : NSObject {
    NSDate * _date;
    bool  _isValid;
}

@property (nonatomic, retain) NSDate *date;
@property (nonatomic) bool isValid;

+ (id)contextWithDate:(id)arg1;

- (void).cxx_destruct;
- (id)date;
- (id)init;
- (bool)isValid;
- (void)setDate:(id)arg1;
- (void)setIsValid:(bool)arg1;

@end
