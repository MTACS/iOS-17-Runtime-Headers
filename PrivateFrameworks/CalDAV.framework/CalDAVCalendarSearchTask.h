
@interface CalDAVCalendarSearchTask : CoreDAVTask {
    NSDictionary * _additionalAuthenticationHeaders;
    NSString * _calendarType;
    NSArray * _languages;
    unsigned long long  _limit;
    NSString * _location;
    NSDictionary * _urlsToResults;
}

@property (nonatomic, readonly, retain) NSDictionary *urlsToResults;

- (void).cxx_destruct;
- (id)additionalHeaderValues;
- (id)copyDefaultParserForContentType:(id)arg1;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)httpMethod;
- (id)initWithLanguages:(id)arg1 location:(id)arg2 calendarType:(id)arg3 url:(id)arg4;
- (id)requestBody;
- (void)setAdditionalAuthenticationHeaders:(id)arg1;
- (void)setLimit:(unsigned long long)arg1;
- (id)urlsToResults;

@end
