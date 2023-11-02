
@interface NFTNEPService : NSObject <NSCopying, NSSecureCoding> {
    unsigned short  _maxMessageSize;
    unsigned char  _maxWaitTimeExtension;
    unsigned char  _minWaitTime;
    NSString * _uri;
}

@property (nonatomic) unsigned short maxMessageSize;
@property (nonatomic) unsigned char maxWaitTimeExtension;
@property (nonatomic) unsigned char minWaitTime;
@property (nonatomic, retain) NSString *uri;

+ (id)serviceWithURI:(id)arg1 minWaitTime:(unsigned char)arg2 maxWaitTimeExtension:(unsigned char)arg3 maxMessageSize:(unsigned short)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned short)maxMessageSize;
- (unsigned char)maxWaitTimeExtension;
- (unsigned char)minWaitTime;
- (void)setMaxMessageSize:(unsigned short)arg1;
- (void)setMaxWaitTimeExtension:(unsigned char)arg1;
- (void)setMinWaitTime:(unsigned char)arg1;
- (void)setUri:(id)arg1;
- (id)uri;

@end
