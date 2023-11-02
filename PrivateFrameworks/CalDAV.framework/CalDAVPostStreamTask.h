
@interface CalDAVPostStreamTask : CoreDAVPostTask {
    NSString * _filename;
    NSString * _previousScheduleTag;
}

@property (nonatomic, retain) NSString *filename;
@property (nonatomic, retain) NSString *previousScheduleTag;

- (void).cxx_destruct;
- (id)additionalHeaderValues;
- (id)copyDefaultParserForContentType:(id)arg1;
- (id)filename;
- (id)lossyAsciiFilename;
- (id)previousScheduleTag;
- (id)requestBody;
- (id)requestBodyStream;
- (id)responseData;
- (void)setFilename:(id)arg1;
- (void)setPreviousScheduleTag:(id)arg1;
- (id)utf8PercentEscapedFilename;

@end
