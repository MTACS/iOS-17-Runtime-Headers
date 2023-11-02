
@interface SHLyricLine : NSObject <NSSecureCoding> {
    double  _offset;
    NSString * _text;
}

@property (nonatomic) double offset;
@property (nonatomic, copy) NSString *text;

+ (id)lyricLineWithText:(id)arg1 offset:(double)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLineWithText:(id)arg1 offset:(double)arg2;
- (double)offset;
- (void)setOffset:(double)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
