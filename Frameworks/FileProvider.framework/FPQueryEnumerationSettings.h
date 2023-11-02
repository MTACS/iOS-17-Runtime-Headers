
@interface FPQueryEnumerationSettings : FPEnumerationSettings {
    NSArray * _allowedFileTypes;
    NSArray * _allowedProviders;
    NSNumber * _desiredNumberOfItems;
    NSArray * _excludedFileTypes;
    NSString * _tagIdentifier;
}

@property (copy) NSArray *allowedFileTypes;
@property (copy) NSArray *allowedProviders;
@property (copy) NSNumber *desiredNumberOfItems;
@property (copy) NSArray *excludedFileTypes;
@property (copy) NSString *tagIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allowedFileTypes;
- (id)allowedProviders;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)desiredNumberOfItems;
- (id)excludedFileTypes;
- (id)init;
- (void)setAllowedFileTypes:(id)arg1;
- (void)setAllowedProviders:(id)arg1;
- (void)setDesiredNumberOfItems:(id)arg1;
- (void)setExcludedFileTypes:(id)arg1;
- (void)setTagIdentifier:(id)arg1;
- (id)tagIdentifier;

@end
