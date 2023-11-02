
@interface BlastDoorStickerAttachmentInfo : NSObject {
    void stickerAttachmentInfo;
}

@property (nonatomic, readonly) unsigned long long associatedPositionIntent;
@property (nonatomic, readonly) NSString *balloonBundleID;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) bool has_associatedPositionIntent;
@property (nonatomic, readonly) bool has_parentPreviewWidth;
@property (nonatomic, readonly) bool has_positionIntent;
@property (nonatomic, readonly) bool has_stickerOffset;
@property (nonatomic, readonly) bool has_stickerRotation;
@property (nonatomic, readonly) bool has_stickerScale;
@property (nonatomic, readonly) double parentPreviewWidth;
@property (nonatomic, readonly) unsigned long long positionIntent;
@property (nonatomic, readonly) NSString *stickerHash;
@property (nonatomic, readonly) NSString *stickerIdentifier;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } stickerOffset;
@property (nonatomic, readonly) NSString *stickerPackIdentifier;
@property (nonatomic, readonly) double stickerRotation;
@property (nonatomic, readonly) double stickerScale;

- (void).cxx_destruct;
- (unsigned long long)associatedPositionIntent;
- (id)balloonBundleID;
- (id)description;
- (bool)has_associatedPositionIntent;
- (bool)has_parentPreviewWidth;
- (bool)has_positionIntent;
- (bool)has_stickerOffset;
- (bool)has_stickerRotation;
- (bool)has_stickerScale;
- (id)init;
- (double)parentPreviewWidth;
- (unsigned long long)positionIntent;
- (id)stickerHash;
- (id)stickerIdentifier;
- (struct CGPoint { double x1; double x2; })stickerOffset;
- (id)stickerPackIdentifier;
- (double)stickerRotation;
- (double)stickerScale;

@end
