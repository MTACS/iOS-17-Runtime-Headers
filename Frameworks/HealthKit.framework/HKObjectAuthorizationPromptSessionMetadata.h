
@interface HKObjectAuthorizationPromptSessionMetadata : NSObject <NSCopying, NSSecureCoding> {
    HKObjectType * _expectedObjectType;
    NSArray * _recordTypes;
}

@property (nonatomic, readonly, copy) HKObjectType *expectedObjectType;
@property (nonatomic, copy) NSArray *recordTypes;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)expectedObjectType;
- (id)initWithCoder:(id)arg1;
- (id)initWithExpectedObjectType:(id)arg1;
- (id)recordTypes;
- (void)setRecordTypes:(id)arg1;

@end
