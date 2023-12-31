
@interface SiriUICardLogger : NSObject {
    NSDateFormatter * _dateFormatter;
}

+ (id)_sharedInstance;
+ (id)logCard:(id)arg1;
+ (id)logCard:(id)arg1 format:(unsigned long long)arg2;
+ (id)logCardData:(id)arg1;
+ (id)logCardData:(id)arg1 format:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)_currentFilenameForFormat:(unsigned long long)arg1;
- (id)_dateFormatter;
- (id)_nowString;
- (id)init;

@end
