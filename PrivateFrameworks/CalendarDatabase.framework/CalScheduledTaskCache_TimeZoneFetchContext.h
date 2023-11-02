
@interface CalScheduledTaskCache_TimeZoneFetchContext : NSObject {
    NSMutableDictionary * _dict;
    NSTimeZone * _nextTimeZone;
    NSTimeZone * _previousTimeZone;
}

@property (nonatomic, retain) NSMutableDictionary *dict;
@property (nonatomic, retain) NSTimeZone *nextTimeZone;
@property (nonatomic, retain) NSTimeZone *previousTimeZone;

- (void).cxx_destruct;
- (id)dict;
- (id)nextTimeZone;
- (id)previousTimeZone;
- (void)setDict:(id)arg1;
- (void)setNextTimeZone:(id)arg1;
- (void)setPreviousTimeZone:(id)arg1;

@end
