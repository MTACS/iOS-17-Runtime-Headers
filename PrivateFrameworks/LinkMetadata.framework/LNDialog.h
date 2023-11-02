
@interface LNDialog : NSObject <NSCopying, NSSecureCoding> {
    NSString * _localeIdentifier;
}

@property (nonatomic, readonly, copy) NSString *localeIdentifier;

// Image: /System/Library/PrivateFrameworks/LinkMetadata.framework/LinkMetadata

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocaleIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localeIdentifier;

// Image: /System/Library/PrivateFrameworks/LinkServices.framework/LinkServices

- (void)getResultWithCompletionHandler:(id /* block */)arg1;

@end
