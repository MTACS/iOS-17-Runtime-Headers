
@interface CPAssistantCellConfiguration : NSObject <NSSecureCoding> {
    long long  _assistantAction;
    long long  _position;
    long long  _visibility;
}

@property (nonatomic, readonly) long long assistantAction;
@property (nonatomic, readonly) long long position;
@property (nonatomic, readonly) long long visibility;

+ (bool)supportsSecureCoding;

- (long long)assistantAction;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPosition:(long long)arg1 visibility:(long long)arg2 assistantAction:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToConfiguration:(id)arg1;
- (long long)position;
- (long long)visibility;

@end
