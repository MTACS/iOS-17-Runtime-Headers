
@interface NEFilterReport : NSObject <NSCopying, NSSecureCoding> {
    long long  _action;
    unsigned long long  _bytesInboundCount;
    unsigned long long  _bytesOutboundCount;
    long long  _event;
    NEFilterFlow * _flow;
}

@property long long action;
@property unsigned long long bytesInboundCount;
@property unsigned long long bytesOutboundCount;
@property (readonly) long long event;
@property (retain) NEFilterFlow *flow;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)action;
- (unsigned long long)bytesInboundCount;
- (unsigned long long)bytesOutboundCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)event;
- (id)flow;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setAction:(long long)arg1;
- (void)setBytesInboundCount:(unsigned long long)arg1;
- (void)setBytesOutboundCount:(unsigned long long)arg1;
- (void)setFlow:(id)arg1;

@end
