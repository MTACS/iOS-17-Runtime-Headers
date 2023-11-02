
@interface LNDeferredLocalizedString : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _arguments;
    NSString * _localizedKey;
}

@property (nonatomic, readonly, copy) NSArray *arguments;
@property (nonatomic, readonly, copy) NSString *localizedKey;
@property (nonatomic, readonly, copy) NSString *localizedKeyWithParameters;
@property (nonatomic, readonly, copy) NSArray *parameterDefinitions;
@property (nonatomic, readonly) NSDictionary *parametersForCAT;

// Image: /System/Library/PrivateFrameworks/LinkMetadata.framework/LinkMetadata

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)arguments;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocalizedKey:(id)arg1 arguments:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)localizedKey;

// Image: /System/Library/PrivateFrameworks/LinkServices.framework/LinkServices

- (id)localizedKeyWithParameters;
- (id)parameterDefinitions;
- (id)parametersForCAT;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (void)wf_getLocalizedStringWithCompletionHandler:(id /* block */)arg1;
- (id)wf_localizedString;

@end
