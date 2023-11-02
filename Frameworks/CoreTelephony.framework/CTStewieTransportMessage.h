
@interface CTStewieTransportMessage : NSObject <NSCopying, NSSecureCoding> {
    NSData * _data;
    NSDictionary * _metadata;
    NSString * _msgId;
}

@property (nonatomic, retain) NSData *data;
@property (nonatomic, retain) NSDictionary *metadata;
@property (nonatomic, retain) NSString *msgId;

+ (id)allowedSetOfClasses;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMsgId:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTransportMessage:(id)arg1;
- (id)metadata;
- (id)msgId;
- (void)setData:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setMsgId:(id)arg1;

@end
