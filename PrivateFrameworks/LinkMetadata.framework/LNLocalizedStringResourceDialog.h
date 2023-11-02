
@interface LNLocalizedStringResourceDialog : LNDialog <NSSecureCoding> {
    LNStaticDeferredLocalizedString * _fullString;
    LNStaticDeferredLocalizedString * _supportingString;
}

@property (nonatomic, readonly, copy) LNStaticDeferredLocalizedString *fullString;
@property (nonatomic, readonly, copy) LNStaticDeferredLocalizedString *supportingString;

// Image: /System/Library/PrivateFrameworks/LinkMetadata.framework/LinkMetadata

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)fullString;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFullString:(id)arg1 supportingString:(id)arg2 localeIdentifier:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)supportingString;

// Image: /System/Library/PrivateFrameworks/LinkServices.framework/LinkServices

- (void)getResultWithCompletionHandler:(id /* block */)arg1;
- (id)localeXML;
- (id)parametersXML;

@end
