
@interface AFSearchAlarmsResponse : AFSiriResponse {
    NSArray * _results;
}

@property (nonatomic, copy) NSArray *results;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)results;
- (void)setResults:(id)arg1;

@end
