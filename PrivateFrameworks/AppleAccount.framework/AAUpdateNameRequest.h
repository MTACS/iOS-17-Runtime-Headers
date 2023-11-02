
@interface AAUpdateNameRequest : AAAppleIDSettingsRequest {
    NSString * _newFirstName;
    NSString * _newLastName;
}

+ (Class)responseClass;

- (void).cxx_destruct;
- (id)initWithGrandSlamAccount:(id)arg1 accountStore:(id)arg2 firstName:(id)arg3 lastName:(id)arg4;
- (id)urlRequest;
- (id)urlString;

@end
