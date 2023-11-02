
@interface CTStewieMessageAck : NSObject <NSCopying, NSSecureCoding> {
    NSError * _error;
    bool  _success;
    long long  _transportType;
}

@property (nonatomic, retain) NSError *error;
@property (nonatomic) bool success;
@property (nonatomic) long long transportType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithError:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToMessageAck:(id)arg1;
- (void)setError:(id)arg1;
- (void)setSuccess:(bool)arg1;
- (void)setTransportType:(long long)arg1;
- (bool)success;
- (long long)transportType;

@end
