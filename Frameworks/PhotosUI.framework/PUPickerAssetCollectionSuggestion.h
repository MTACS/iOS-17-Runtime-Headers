
@interface PUPickerAssetCollectionSuggestion : NSObject <NSSecureCoding, PUPickerSuggestion> {
    void extendedCuratedAssetsOnly;
    void localIdentifier;
    void shouldReverseSortOrder;
}

@property (nonatomic, readonly) bool extendedCuratedAssetsOnly;
@property (nonatomic, readonly) NSString *localIdentifier;
@property (nonatomic, readonly) bool shouldReverseSortOrder;

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (bool)extendedCuratedAssetsOnly;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocalIdentifier:(id)arg1 extendedCuratedAssetsOnly:(bool)arg2 shouldReverseSortOrder:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (id)localIdentifier;
- (bool)shouldReverseSortOrder;

@end
