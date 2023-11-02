
@interface LPLyricExcerptMetadata : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _endTime;
    NSString * _language;
    NSString * _lyrics;
    NSNumber * _startTime;
}

@property (nonatomic, retain) NSNumber *endTime;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) NSString *lyrics;
@property (nonatomic, retain) NSNumber *startTime;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)endTime;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)language;
- (id)lyrics;
- (void)setEndTime:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setLyrics:(id)arg1;
- (void)setStartTime:(id)arg1;
- (id)startTime;

@end
