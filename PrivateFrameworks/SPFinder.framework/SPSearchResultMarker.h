
@interface SPSearchResultMarker : NSObject <NSSecureCoding> {
    NSDate * _date;
}

@property (nonatomic, retain) NSDate *date;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)date;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setDate:(id)arg1;

@end
