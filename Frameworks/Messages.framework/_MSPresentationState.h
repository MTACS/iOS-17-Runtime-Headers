
@interface _MSPresentationState : NSObject <NSSecureCoding> {
    unsigned long long  _presentationContext;
    unsigned long long  _presentationStyle;
}

@property (nonatomic, readonly) unsigned long long presentationContext;
@property (nonatomic) unsigned long long presentationStyle;

+ (bool)isRunningInCameraContext;
+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)presentationContext;
- (unsigned long long)presentationStyle;
- (void)setPresentationStyle:(unsigned long long)arg1;

@end
