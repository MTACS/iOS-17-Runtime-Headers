
@interface AFDisambiguationInfo : NSObject <NSSecureCoding> {
    NSArray * _history;
    long long  _version;
}

@property (nonatomic, retain) NSArray *history;
@property (nonatomic, readonly) long long version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)history;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setHistory:(id)arg1;
- (long long)version;

@end
