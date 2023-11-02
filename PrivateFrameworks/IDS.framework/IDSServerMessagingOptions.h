
@interface IDSServerMessagingOptions : NSObject <NSSecureCoding> {
    NSNumber * _timeout;
}

@property (nonatomic, retain) NSNumber *timeout;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setTimeout:(id)arg1;
- (id)timeout;

@end
