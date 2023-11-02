
@interface ICBaseTextViewPasteSession : NSObject {
    bool  _didWarnAboutAttachmentLimitExceeded;
    bool  _didWarnAboutAttachmentSizeExceeded;
    bool  _didWarnAboutExceedingMaxLength;
    bool  _didWarnAboutNotSupportedForPasswordProtectedNotes;
    unsigned long long  _numberOfImagesPasted;
    bool  _previousShouldAddMediaAsynchronously;
}

@property (nonatomic) bool didWarnAboutAttachmentLimitExceeded;
@property (nonatomic) bool didWarnAboutAttachmentSizeExceeded;
@property (nonatomic) bool didWarnAboutExceedingMaxLength;
@property (nonatomic) bool didWarnAboutNotSupportedForPasswordProtectedNotes;
@property (nonatomic) unsigned long long numberOfImagesPasted;
@property (nonatomic) bool previousShouldAddMediaAsynchronously;

- (bool)didWarnAboutAttachmentLimitExceeded;
- (bool)didWarnAboutAttachmentSizeExceeded;
- (bool)didWarnAboutExceedingMaxLength;
- (bool)didWarnAboutNotSupportedForPasswordProtectedNotes;
- (unsigned long long)numberOfImagesPasted;
- (bool)previousShouldAddMediaAsynchronously;
- (void)setDidWarnAboutAttachmentLimitExceeded:(bool)arg1;
- (void)setDidWarnAboutAttachmentSizeExceeded:(bool)arg1;
- (void)setDidWarnAboutExceedingMaxLength:(bool)arg1;
- (void)setDidWarnAboutNotSupportedForPasswordProtectedNotes:(bool)arg1;
- (void)setNumberOfImagesPasted:(unsigned long long)arg1;
- (void)setPreviousShouldAddMediaAsynchronously:(bool)arg1;

@end
