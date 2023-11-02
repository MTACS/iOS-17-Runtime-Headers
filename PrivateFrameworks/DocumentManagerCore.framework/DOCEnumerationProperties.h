
@interface DOCEnumerationProperties : NSObject {
    NSArray * _allowedContentTypes;
    NSArray * _excludedContentTypes;
    NSString * _hostIdentifier;
    NSNumber * _maximumNumberOfItems;
    NSArray * _tagIdentifiers;
}

@property (copy) NSArray *allowedContentTypes;
@property (copy) NSArray *excludedContentTypes;
@property (copy) NSString *hostIdentifier;
@property (copy) NSNumber *maximumNumberOfItems;
@property (copy) NSArray *tagIdentifiers;

- (void).cxx_destruct;
- (id)allowedContentTypes;
- (id)excludedContentTypes;
- (id)hostIdentifier;
- (id)initWithConfiguration:(id)arg1 tags:(id)arg2;
- (id)initWithHostIdentifier:(id)arg1 maximumNumberOfItems:(long long)arg2 allowedContentTypes:(id)arg3 excludedContentTypes:(id)arg4 tags:(id)arg5;
- (id)maximumNumberOfItems;
- (void)setAllowedContentTypes:(id)arg1;
- (void)setExcludedContentTypes:(id)arg1;
- (void)setHostIdentifier:(id)arg1;
- (void)setMaximumNumberOfItems:(id)arg1;
- (void)setTagIdentifiers:(id)arg1;
- (id)tagIdentifiers;

@end
