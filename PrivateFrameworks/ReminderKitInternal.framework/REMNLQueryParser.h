
@interface REMNLQueryParser : NSObject {
    bool  _forTesting;
    NSLocale * _locale;
    NSDate * _referenceDate;
    NSTimeZone * _timeZone;
}

@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic, readonly) NSDate *referenceDate;

- (void).cxx_destruct;
- (id)initWithLocale:(id)arg1 referenceDate:(id)arg2 referenceTimeZone:(id)arg3 forTesting:(bool)arg4;
- (id)locale;
- (id)parseString:(id)arg1;
- (id)parserManagerTestOptions;
- (id)referenceDate;

@end
