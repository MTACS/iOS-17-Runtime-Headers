
@interface TSTimeConverter : NSObject {
    NSArray * _taiutc;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithTAIUTCArray:(id)arg1;
- (double)leapSecondForTAIDate:(id)arg1;
- (double)leapSecondForUTCDate:(id)arg1;
- (id)taiDateFromUTCDate:(id)arg1;
- (id)utcDateFromTAIDate:(id)arg1;

@end
