
@interface DTAssetResponse : NSObject <NSSecureCoding> {
    bool  _completed;
    NSData * _data;
    NSString * _identifier;
}

@property (getter=isCompleted, nonatomic, readonly) bool completed;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) DTXMessage *message;

+ (id)completedResponseWithIdentifier:(id)arg1;
+ (id)responseWithIdentifier:(id)arg1 data:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)data;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 data:(id)arg2 completed:(bool)arg3;
- (bool)isCompleted;
- (id)message;

@end
