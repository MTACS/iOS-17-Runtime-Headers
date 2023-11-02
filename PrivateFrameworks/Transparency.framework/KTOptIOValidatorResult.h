
@interface KTOptIOValidatorResult : NSObject <NSSecureCoding> {
    unsigned long long  _state;
    NSDate * _timestamp;
    NSDictionary * _uriNeedsOptInChange;
    NSArray * _uris;
    bool  _usedIntendedState;
}

@property unsigned long long state;
@property (retain) NSDate *timestamp;
@property (retain) NSDictionary *uriNeedsOptInChange;
@property (retain) NSArray *uris;
@property bool usedIntendedState;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithState:(unsigned long long)arg1 timestamp:(id)arg2;
- (void)setState:(unsigned long long)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setUriNeedsOptInChange:(id)arg1;
- (void)setUris:(id)arg1;
- (void)setUsedIntendedState:(bool)arg1;
- (unsigned long long)state;
- (id)timestamp;
- (id)uriNeedsOptInChange;
- (id)uris;
- (bool)usedIntendedState;

@end
