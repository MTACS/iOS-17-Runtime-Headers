
@interface VSIdentityProviderStorefrontMetadata : NSObject {
    bool  _isFeatured;
    NSNumber * _sortOrdinal;
    NSString * _storefrontTwoCharCode;
}

@property (nonatomic) bool isFeatured;
@property (nonatomic, retain) NSNumber *sortOrdinal;
@property (nonatomic, retain) NSString *storefrontTwoCharCode;

- (void).cxx_destruct;
- (bool)isFeatured;
- (void)setIsFeatured:(bool)arg1;
- (void)setSortOrdinal:(id)arg1;
- (void)setStorefrontTwoCharCode:(id)arg1;
- (id)sortOrdinal;
- (id)storefrontTwoCharCode;

@end
