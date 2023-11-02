
@interface BlastDoorCombinedPluginAttachment : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  combinedPluginAttachment;
}

@property (nonatomic, readonly) BlastDoorEncodedAttachments *attachments;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorBalloonPluginPayloadWrapper *payload;

- (void).cxx_destruct;
- (id)attachments;
- (id)description;
- (id)init;
- (id)payload;

@end
