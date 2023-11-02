
@interface IMAssociatedMessageChatItem : IMTranscriptChatItem {
    IMEmojiSticker * _emojiSticker;
    struct IMAssociatedMessageGeometryDescriptor { 
        unsigned long long layoutIntent; 
        unsigned long long associatedLayoutIntent; 
        double parentPreviewWidth; 
        double xScalar; 
        double yScalar; 
        double scale; 
        double rotation; 
    }  _geometryDescriptor;
    bool  _parentMessageIsFromMe;
    IMHandle * _sender;
    unsigned long long  _stickerEffectType;
    IMTapback * _tapback;
}

@property (nonatomic, readonly) NSString *associatedMessageGUID;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } associatedMessageRange;
@property (nonatomic, readonly) long long associatedMessageType;
@property (nonatomic, readonly) IMEmojiSticker *emojiSticker;
@property (nonatomic, readonly) bool failed;
@property (nonatomic, readonly) struct IMAssociatedMessageGeometryDescriptor { unsigned long long x1; unsigned long long x2; double x3; double x4; double x5; double x6; double x7; } geometryDescriptor;
@property (nonatomic, readonly) bool isEmojiSticker;
@property (nonatomic, readonly) bool isFromMe;
@property (nonatomic, readonly) NSDictionary *messageSummaryInfo;
@property (nonatomic, readonly) bool parentMessageIsFromMe;
@property (nonatomic, readonly) IMHandle *sender;
@property (nonatomic) unsigned long long stickerEffectType;
@property (nonatomic, readonly) IMTapback *tapback;
@property (nonatomic, readonly) NSDate *time;

- (void).cxx_destruct;
- (id)_imAssociatedMessageItem;
- (id)_initWithItem:(id)arg1 sender:(id)arg2;
- (void)_setGeometryDescriptor:(struct IMAssociatedMessageGeometryDescriptor { unsigned long long x1; unsigned long long x2; double x3; double x4; double x5; double x6; double x7; })arg1;
- (void)_setParentMessageIsFromMe:(bool)arg1;
- (id)associatedMessageGUID;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })associatedMessageRange;
- (long long)associatedMessageType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)emojiSticker;
- (bool)failed;
- (struct IMAssociatedMessageGeometryDescriptor { unsigned long long x1; unsigned long long x2; double x3; double x4; double x5; double x6; double x7; })geometryDescriptor;
- (bool)isEmojiSticker;
- (bool)isFromMe;
- (id)message;
- (id)messageSummaryInfo;
- (bool)parentMessageIsFromMe;
- (id)sender;
- (void)setEmojiSticker:(id)arg1;
- (void)setStickerEffectType:(unsigned long long)arg1;
- (void)setTapback:(id)arg1;
- (unsigned long long)stickerEffectType;
- (id)tapback;
- (id)time;

@end
