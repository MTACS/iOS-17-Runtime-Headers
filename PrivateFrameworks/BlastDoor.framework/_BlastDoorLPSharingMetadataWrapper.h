
@interface _BlastDoorLPSharingMetadataWrapper : NSObject <NSSecureCoding> {
    bool  _hasCompletedFetch;
    bool  _hasFetchedSubresources;
    _BlastDoorLPLinkMetadata * _metadata;
}

@property (nonatomic) bool hasCompletedFetch;
@property (nonatomic) bool hasFetchedSubresources;
@property (nonatomic, retain) _BlastDoorLPLinkMetadata *metadata;

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
