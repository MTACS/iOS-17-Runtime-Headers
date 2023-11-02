
@interface PKSharingGenericMessage : PKSharingMessage {
    NSDictionary * _appleSharingDict;
    NSDictionary * _genericSharingDict;
}

@property (nonatomic, readonly) NSDictionary *appleSharingDict;
@property (nonatomic, readonly) NSDictionary *genericSharingDict;

+ (id)_contentForGenericSharingDict:(id)arg1 appleSharingDict:(id)arg2 format:(unsigned long long)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addEmbeddedMessages:(id)arg1;
- (id)appleSharingDict;
- (bool)configureWithContent:(id)arg1;
- (id)description;
- (id)embeddedMessageURLs;
- (id)genericSharingDict;
- (unsigned long long)hash;
- (id)initWithFormat:(unsigned long long)arg1 type:(unsigned long long)arg2 genericSharingDict:(id)arg3 appleSharingDict:(id)arg4;
- (id)initWithFormat:(unsigned long long)arg1 type:(unsigned long long)arg2 genericSharingDict:(id)arg3 appleSharingDict:(id)arg4 displayInformation:(id)arg5;
- (id)initWithVertical:(unsigned long long)arg1 type:(unsigned long long)arg2 genericSharingDict:(id)arg3 appleSharingDict:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSharingGenericMessage:(id)arg1;

@end
