
@interface ILCommunication : NSObject <NSSecureCoding> {
    NSDate * _dateReceived;
    NSString * _sender;
}

@property (nonatomic, readonly, copy) NSDate *dateReceived;
@property (nonatomic, readonly, copy) NSString *sender;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dateReceived;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSender:(id)arg1 dateReceived:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCommunication:(id)arg1;
- (id)sender;

@end
