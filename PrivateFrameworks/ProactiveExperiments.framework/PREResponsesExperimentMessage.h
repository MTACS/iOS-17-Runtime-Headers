
@interface PREResponsesExperimentMessage : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _dateSent;
    bool  _emote;
    bool  _read;
    NSString * _senderIdentifier;
    NSString * _summaryString;
    bool  _tapBack;
    NSString * _title;
}

@property (nonatomic, retain) NSDate *dateSent;
@property (getter=isEmote, nonatomic) bool emote;
@property (getter=isRead, nonatomic) bool read;
@property (nonatomic, copy) NSString *senderIdentifier;
@property (nonatomic, copy) NSString *summaryString;
@property (getter=isTapBack, nonatomic) bool tapBack;
@property (nonatomic, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateSent;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEmote;
- (bool)isEqual:(id)arg1;
- (bool)isRead;
- (bool)isTapBack;
- (id)senderIdentifier;
- (void)setDateSent:(id)arg1;
- (void)setEmote:(bool)arg1;
- (void)setRead:(bool)arg1;
- (void)setSenderIdentifier:(id)arg1;
- (void)setSummaryString:(id)arg1;
- (void)setTapBack:(bool)arg1;
- (void)setTitle:(id)arg1;
- (id)summaryString;
- (id)title;

@end
