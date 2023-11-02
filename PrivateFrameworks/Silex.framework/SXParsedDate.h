
@interface SXParsedDate : NSObject <SXParsedDate> {
    bool  _containedTime;
    NSDate * _date;
    NSTimeZone * _timeZone;
}

@property (nonatomic, readonly) bool containedTime;
@property (nonatomic, readonly) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSTimeZone *timeZone;

- (void).cxx_destruct;
- (bool)containedTime;
- (id)date;
- (id)initWithDate:(id)arg1 containedTime:(bool)arg2 timeZone:(id)arg3;
- (id)timeZone;

@end