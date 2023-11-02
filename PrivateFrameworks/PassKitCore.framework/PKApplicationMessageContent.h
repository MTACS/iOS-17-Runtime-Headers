
@interface PKApplicationMessageContent : NSObject <NSSecureCoding> {
    PKApplicationMessageAction * _action;
    PKApplicationMessageGroupDescriptor * _group;
    long long  _type;
}

@property (nonatomic, readonly) PKApplicationMessageAction *action;
@property (nonatomic, readonly) PKApplicationMessageContentDefault *contentTypeDefault;
@property (nonatomic, readonly) PKApplicationMessageGroupDescriptor *group;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)action;
- (id)contentTypeDefault;
- (void)encodeWithCoder:(id)arg1;
- (id)group;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (long long)type;

@end
