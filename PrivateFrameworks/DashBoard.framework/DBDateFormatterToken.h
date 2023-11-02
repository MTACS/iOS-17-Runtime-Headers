
@interface DBDateFormatterToken : NSObject <NSCopying> {
    unsigned long long  _dateStyle;
    NSString * _formatString;
    unsigned long long  _timeStyle;
}

@property (nonatomic) unsigned long long dateStyle;
@property (nonatomic, copy) NSString *formatString;
@property (nonatomic) unsigned long long timeStyle;

+ (id)tokenWithDateStyle:(unsigned long long)arg1 timeStyle:(unsigned long long)arg2;
+ (id)tokenWithFormatString:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)dateStyle;
- (id)description;
- (id)formatString;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)setDateStyle:(unsigned long long)arg1;
- (void)setFormatString:(id)arg1;
- (void)setTimeStyle:(unsigned long long)arg1;
- (unsigned long long)timeStyle;

@end
