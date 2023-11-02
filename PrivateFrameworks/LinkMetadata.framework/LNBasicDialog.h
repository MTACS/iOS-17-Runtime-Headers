
@interface LNBasicDialog : LNDialog <NSSecureCoding> {
    LNDeferredLocalizedString * _fullString;
    LNDeferredLocalizedString * _printedString;
    LNDeferredLocalizedString * _spokenString;
    LNDeferredLocalizedString * _supportingString;
}

@property (nonatomic, readonly, copy) LNDeferredLocalizedString *fullString;
@property (nonatomic, readonly, copy) LNDeferredLocalizedString *printedString;
@property (nonatomic, readonly, copy) LNDeferredLocalizedString *spokenString;
@property (nonatomic, readonly, copy) LNDeferredLocalizedString *supportingString;

// Image: /System/Library/PrivateFrameworks/LinkMetadata.framework/LinkMetadata

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)fullString;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFullString:(id)arg1 supportingString:(id)arg2 localeIdentifier:(id)arg3;
- (id)initWithPrintedString:(id)arg1 spokenString:(id)arg2 localeIdentifier:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)printedString;
- (id)spokenString;
- (id)supportingString;

// Image: /System/Library/PrivateFrameworks/LinkServices.framework/LinkServices

- (void)getResultWithCompletionHandler:(id /* block */)arg1;
- (id)localeXML;
- (id)parameterDefinitions;
- (id)parameters;
- (id)parametersXML;

@end
