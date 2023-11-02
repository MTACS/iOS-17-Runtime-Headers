
@interface SROSmartRepliesMessage : NSObject {
    _TtC12SmartReplies21SRSmartRepliesMessage * _underlyingMessage;
}

@property (nonatomic, copy) NSDate *dateSent;
@property (getter=isEmote, nonatomic) bool emote;
@property (getter=isRead, nonatomic) bool read;
@property (nonatomic, copy) NSString *senderIdentifier;
@property (nonatomic, copy) NSString *summary;
@property (getter=isTapBack, nonatomic) bool tapBack;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)dateSent;
- (id)init;
- (bool)isEmote;
- (bool)isRead;
- (bool)isTapBack;
- (id)senderIdentifier;
- (void)setDateSent:(id)arg1;
- (void)setEmote:(bool)arg1;
- (void)setRead:(bool)arg1;
- (void)setSenderIdentifier:(id)arg1;
- (void)setSummary:(id)arg1;
- (void)setTapBack:(bool)arg1;
- (void)setTitle:(id)arg1;
- (id)summary;
- (id)title;

@end
