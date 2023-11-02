
@interface LPMessagesPayload : NSObject <NSSecureCoding> {
    LPLinkMetadata * _metadata;
    bool  _needsCompleteFetch;
    bool  _needsSubresourceFetch;
    bool  _placeholder;
}

@property (nonatomic, copy) LPLinkMetadata *metadata;
@property (nonatomic) bool needsCompleteFetch;
@property (nonatomic) bool needsSubresourceFetch;
@property (getter=isPlaceholder, nonatomic) bool placeholder;

+ (id)_linkWithDataRepresentation:(id)arg1 substitutingAttachments:(bool)arg2 attachments:(id)arg3;
+ (id)linkWithDataRepresentation:(id)arg1 attachments:(id)arg2;
+ (id)linkWithDataRepresentationWithoutSubstitutingAttachments:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_needsWorkaroundForAppStoreTransformerCrash;
- (id)dataRepresentationWithOutOfLineAttachments:(id*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isPlaceholder;
- (id)metadata;
- (bool)needsCompleteFetch;
- (bool)needsSubresourceFetch;
- (void)performSubstitutionWithAttachments:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setNeedsCompleteFetch:(bool)arg1;
- (void)setNeedsSubresourceFetch:(bool)arg1;
- (void)setPlaceholder:(bool)arg1;

@end
