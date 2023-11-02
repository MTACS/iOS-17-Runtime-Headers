
@interface BlastDoorEncodedAttachmentsEncodedContentWrapper : NSObject {
    void encodedAttachments_EncodedContent;
}

@property (nonatomic, readonly) BlastDoorEncodedAttachments_EncodedAstc *astc;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorEncodedAttachments_RawData *other;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)astc;
- (id)description;
- (id)init;
- (id)other;
- (unsigned long long)type;

@end
