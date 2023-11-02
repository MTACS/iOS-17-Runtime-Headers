
@interface ABTachogramClassification : NSObject {
    bool  _aFibDetected;
    NSDate * _date;
    NSUUID * _uuid;
}

@property (nonatomic) bool aFibDetected;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic, retain) NSUUID *uuid;

- (void).cxx_destruct;
- (bool)aFibDetected;
- (id)date;
- (void)setAFibDetected:(bool)arg1;
- (void)setDate:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)uuid;

@end
