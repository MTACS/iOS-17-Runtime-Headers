
@interface ANSTSmileEstimate : NSObject <NSSecureCoding> {
    long long  _smile;
}

@property (nonatomic, readonly) long long smile;

+ (id)new;
+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSmile:(long long)arg1;
- (long long)smile;

@end
