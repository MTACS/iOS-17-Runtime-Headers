
@interface ASCViewInAppStoreOfferMetadata : ASCOfferMetadata

@property (nonatomic, readonly, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isViewInAppStore;
- (id)title;

@end
