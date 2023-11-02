
@interface LPSharingMetadataWrapper : NSObject <NSSecureCoding> {
    bool  _hasCompletedFetch;
    bool  _hasFetchedSubresources;
    LPLinkMetadata * _metadata;
}

@property (nonatomic) bool hasCompletedFetch;
@property (nonatomic) bool hasFetchedSubresources;
@property (nonatomic, retain) LPLinkMetadata *metadata;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dataRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasCompletedFetch;
- (bool)hasFetchedSubresources;
- (id)initWithCoder:(id)arg1;
- (id)metadata;
- (void)setHasCompletedFetch:(bool)arg1;
- (void)setHasFetchedSubresources:(bool)arg1;
- (void)setMetadata:(id)arg1;

@end
