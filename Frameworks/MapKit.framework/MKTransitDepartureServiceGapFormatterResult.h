
@interface MKTransitDepartureServiceGapFormatterResult : NSObject {
    NSString * _dateDescription;
    unsigned long long  _dateFormat;
    NSString * _format;
}

@property (nonatomic, readonly, copy) NSString *dateDescription;
@property (nonatomic, readonly) unsigned long long dateFormat;
@property (nonatomic, readonly, copy) NSString *format;
@property (nonatomic, readonly) NSString *formattedString;

- (void).cxx_destruct;
- (id)dateDescription;
- (unsigned long long)dateFormat;
- (id)format;
- (id)formattedString;
- (id)initWithFormat:(id)arg1 dateDescription:(id)arg2 dateFormat:(unsigned long long)arg3;

@end
