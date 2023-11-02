
@interface HKObjectAuthorizationPromptSessionContext : NSObject <NSSecureCoding> {
    HKObjectAuthorizationPromptSessionMetadata * _metadata;
    NSDictionary * _samplesRequiringAuthorization;
}

@property (nonatomic, readonly, copy) HKObjectAuthorizationPromptSessionMetadata *metadata;
@property (nonatomic, readonly, copy) NSDictionary *samplesRequiringAuthorization;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSamplesRequiringAuthorization:(id)arg1 metadata:(id)arg2;
- (id)metadata;
- (id)samplesRequiringAuthorization;

@end
