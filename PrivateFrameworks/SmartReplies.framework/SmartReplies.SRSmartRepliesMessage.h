
@interface SmartReplies.SRSmartRepliesMessage : NSObject <NSCopying, NSSecureCoding> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  dateSent;
    void isEmote;
    void isRead;
    void isTapBack;
    void senderIdentifier;
    void summary;
    void title;
}

@property (nonatomic, copy) NSDate *dateSent;
@property (nonatomic, readonly) long long hash;
@property (nonatomic) bool isEmote;
@property (nonatomic) bool isRead;
@property (nonatomic) bool isTapBack;
@property (nonatomic, copy) NSString *senderIdentifier;
@property (nonatomic, copy) NSString *summary;
@property (nonatomic, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(void*)arg1;
- (id)dateSent;
- (void)encodeWithCoder:(id)arg1;
- (long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEmote;
- (bool)isEqual:(id)arg1;
- (bool)isRead;
- (bool)isTapBack;
- (id)senderIdentifier;
- (void)setDateSent:(id)arg1;
- (void)setIsEmote:(bool)arg1;
- (void)setIsRead:(bool)arg1;
- (void)setIsTapBack:(bool)arg1;
- (void)setSenderIdentifier:(id)arg1;
- (void)setSummary:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)summary;
- (id)title;

@end
