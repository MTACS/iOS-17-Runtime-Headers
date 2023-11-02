
@interface _BlastDoorLPMessagesPayload : NSObject <NSSecureCoding> {
    _BlastDoorLPLinkMetadata * _metadata;
    bool  _needsCompleteFetch;
    bool  _needsSubresourceFetch;
    bool  _placeholder;
}

@property (nonatomic, copy) _BlastDoorLPLinkMetadata *metadata;
@property (nonatomic) bool needsCompleteFetch;
@property (nonatomic) bool needsSubresourceFetch;
@property (getter=isPlaceholder, nonatomic) bool placeholder;

+ (id)linkWithDataRepresentation:(id)arg1 attachments:(id)arg2;
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
- (void)setMetadata:(id)arg1;
- (void)setNeedsCompleteFetch:(bool)arg1;
- (void)setNeedsSubresourceFetch:(bool)arg1;
- (void)setPlaceholder:(bool)arg1;

@end
