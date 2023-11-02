
@interface InAppBindingRequest : NSObject <NSSecureCoding> {
    NSString * _pinningID;
}

@property (nonatomic, readonly) NSString *pinningID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPinningID:(id)arg1;
- (id)pinningID;

@end
