
@interface CKAudioMessageChatItem : CKExpirableMessageChatItem {
    bool  _isExpanded;
}

@property (nonatomic, readonly) NSString *audioTranscriptionText;
@property (nonatomic) bool isExpanded;
@property (nonatomic, readonly) CKAudioMediaObject *mediaObject;

- (id)_audioTranscriptionTextFromTransfer;
- (id)audioTranscriptionText;
- (unsigned long long)balloonCorners;
- (Class)balloonViewClass;
- (Class)cellClass;
- (bool)isAudioMessage;
- (bool)isExpanded;
- (void)setIsExpanded:(bool)arg1;
- (bool)shouldCacheSize;

@end
