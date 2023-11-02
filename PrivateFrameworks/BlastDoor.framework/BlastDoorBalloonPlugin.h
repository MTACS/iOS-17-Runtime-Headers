
@interface BlastDoorBalloonPlugin : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  balloonPlugin;
}

@property (nonatomic, readonly) NSString *associatedMessageGUID;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } associatedMessageRange;
@property (nonatomic, readonly) long long associatedMessageType;
@property (nonatomic, readonly) BlastDoorEncodedAttachments *attachments;
@property (nonatomic, readonly) NSArray *attributionInfo;
@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSAttributedString *content;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) bool has_associatedMessageRange;
@property (nonatomic, readonly) bool has_associatedMessageType;
@property (nonatomic, readonly) bool isExpirable;
@property (nonatomic, readonly) NSArray *participantDestinationIdentifiers;
@property (nonatomic, readonly) BlastDoorBalloonPluginPayloadWrapper *payload;
@property (nonatomic, readonly) NSString *plainTextBody;

- (void).cxx_destruct;
- (id)associatedMessageGUID;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })associatedMessageRange;
- (long long)associatedMessageType;
- (id)attachments;
- (id)attributionInfo;
- (id)bundleID;
- (id)content;
- (id)description;
- (bool)has_associatedMessageRange;
- (bool)has_associatedMessageType;
- (id)init;
- (bool)isExpirable;
- (id)participantDestinationIdentifiers;
- (id)payload;
- (id)plainTextBody;

@end
