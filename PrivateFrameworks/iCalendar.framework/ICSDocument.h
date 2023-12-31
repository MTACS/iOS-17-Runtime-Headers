
@interface ICSDocument : NSObject {
    ICSCalendar * _calendar;
}

+ (int)ICSChecksumVersionSpecifiedInOptions:(unsigned long long)arg1;
+ (void)suppressParserSyntaxErrorLogging;

- (void).cxx_destruct;
- (id)ICSChecksumForVersion:(int)arg1;
- (id)ICSChecksumStringForVersion:(int)arg1;
- (id)ICSCompressedDataWithOptions:(unsigned long long)arg1;
- (id)ICSDataWithOptions:(unsigned long long)arg1;
- (id)ICSStringWithOptions:(unsigned long long)arg1;
- (id)calendar;
- (id)initWithCalendar:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)initWithData:(id)arg1 encoding:(unsigned long long)arg2 options:(unsigned long long)arg3 delegate:(id)arg4 error:(id*)arg5;
- (id)initWithData:(id)arg1 encoding:(unsigned long long)arg2 options:(unsigned long long)arg3 error:(id*)arg4;
- (id)initWithData:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)initWithICSString:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (bool)validate:(id*)arg1;
- (void)validateParsedCalendar:(id)arg1;

@end
