
@interface ACActivityDescriptor : NSObject <NSCopying> {
    NSString * _activityIdentifier;
    long long  _contentType;
    NSDate * _createdDate;
    NSData * _descriptorData;
    bool  _isEphemeral;
    NSString * _platterTargetBundleIdentifier;
    ACActivityPresentationOptions * _presentationOptions;
}

@property (nonatomic, copy) NSString *activityIdentifier;
@property (nonatomic) long long contentType;
@property (nonatomic, copy) NSDate *createdDate;
@property (nonatomic, copy) NSData *descriptorData;
@property (nonatomic) bool isEphemeral;
@property (nonatomic, copy) NSString *platterTargetBundleIdentifier;
@property (nonatomic, retain) ACActivityPresentationOptions *presentationOptions;

- (void).cxx_destruct;
- (id)activityIdentifier;
- (long long)contentType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createdDate;
- (id)descriptorData;
- (id)initWithIdentifier:(id)arg1 target:(id)arg2 presentationOptions:(id)arg3 isEphemeral:(bool)arg4 createdDate:(id)arg5 descriptorData:(id)arg6 contentType:(long long)arg7;
- (bool)isEphemeral;
- (id)platterTargetBundleIdentifier;
- (id)presentationOptions;
- (void)setActivityIdentifier:(id)arg1;
- (void)setContentType:(long long)arg1;
- (void)setCreatedDate:(id)arg1;
- (void)setDescriptorData:(id)arg1;
- (void)setIsEphemeral:(bool)arg1;
- (void)setPlatterTargetBundleIdentifier:(id)arg1;
- (void)setPresentationOptions:(id)arg1;

@end
