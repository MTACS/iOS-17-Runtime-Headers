
@interface SLDHighlightDisambiguationPillSlotTag : SLDSlotTag {
    bool  _fromMe;
    NSString * _groupDisplayName;
    bool  _isGroupConversation;
    double  _maxWidth;
    NSNumber * _otherRecipientCount;
    bool  _pinned;
    SLPerson * _sender;
    unsigned long long  _variant;
    NSNumber * _widthNumber;
}

@property (getter=isFromMe, nonatomic) bool fromMe;
@property (nonatomic, retain) NSString *groupDisplayName;
@property (nonatomic) bool isGroupConversation;
@property (nonatomic) double maxWidth;
@property (nonatomic, retain) NSNumber *otherRecipientCount;
@property (getter=isPinned, nonatomic) bool pinned;
@property (nonatomic, retain) SLPerson *sender;
@property (nonatomic) unsigned long long variant;
@property (nonatomic, retain) NSNumber *widthNumber;

+ (id)tagForHighlightAttribution:(id)arg1 maxWidth:(double)arg2 variant:(unsigned long long)arg3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)groupDisplayName;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithHighlightAttribution:(id)arg1 maxWidth:(double)arg2 variant:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isFromMe;
- (bool)isGroupConversation;
- (bool)isPinned;
- (double)maxWidth;
- (id)otherRecipientCount;
- (id)resolvedStyleForStyle:(id)arg1;
- (id)sender;
- (void)setFromMe:(bool)arg1;
- (void)setGroupDisplayName:(id)arg1;
- (void)setIsGroupConversation:(bool)arg1;
- (void)setMaxWidth:(double)arg1;
- (void)setOtherRecipientCount:(id)arg1;
- (void)setPinned:(bool)arg1;
- (void)setSender:(id)arg1;
- (void)setVariant:(unsigned long long)arg1;
- (void)setWidthNumber:(id)arg1;
- (unsigned long long)variant;
- (id)widthNumber;

@end
