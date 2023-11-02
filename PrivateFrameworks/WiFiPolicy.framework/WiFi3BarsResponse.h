
@interface WiFi3BarsResponse : NSObject <NSSecureCoding> {
    NSDictionary * _results;
}

@property (nonatomic, retain) NSDictionary *results;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)results;
- (void)setResults:(id)arg1;

@end
