
@interface IMAssociatedMessageItem : IMMessageItem <IMRemoteObjectCoding, NSCopying, NSSecureCoding> {
    NSString * _associatedMessageGUID;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _associatedMessageRange;
    long long  _associatedMessageType;
    NSArray * _consumedSessionPayloads;
    IMEmojiSticker * _emojiSticker;
    IMTapback * _tapback;
}

@property (nonatomic, retain) NSString *associatedMessageGUID;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } associatedMessageRange;
@property (nonatomic) long long associatedMessageType;
@property (nonatomic, retain) NSArray *consumedSessionPayloads;
@property (nonatomic, retain) IMEmojiSticker *emojiSticker;
@property (nonatomic, retain) IMTapback *tapback;

// Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)associatedMessageGUID;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })associatedMessageRange;
- (long long)associatedMessageType;
- (id)consumedSessionPayloads;
- (id)copyDictionaryRepresentation;
- (id)copyForBackwardsCompatibility;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)emojiSticker;
- (id)emojiString;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 hint:(id)arg2;
- (id)initWithMessageItem:(id)arg1;
- (id)initWithSender:(id)arg1 time:(id)arg2 body:(id)arg3 attributes:(id)arg4 fileTransferGUIDs:(id)arg5 flags:(unsigned long long)arg6 error:(id)arg7 guid:(id)arg8 associatedMessageGUID:(id)arg9 associatedMessageType:(long long)arg10 associatedMessageRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg11 messageSummaryInfo:(id)arg12 threadIdentifier:(id)arg13;
- (id)initWithSenderInfo:(id)arg1 time:(id)arg2 timeRead:(id)arg3 timeDelivered:(id)arg4 timePlayed:(id)arg5 subject:(id)arg6 body:(id)arg7 bodyData:(id)arg8 attributes:(id)arg9 fileTransferGUIDs:(id)arg10 flags:(unsigned long long)arg11 guid:(id)arg12 messageID:(long long)arg13 account:(id)arg14 accountID:(id)arg15 service:(id)arg16 handle:(id)arg17 roomName:(id)arg18 unformattedID:(id)arg19 countryCode:(id)arg20 expireState:(long long)arg21 balloonBundleID:(id)arg22 payloadData:(id)arg23 expressiveSendStyleID:(id)arg24 timeExpressiveSendPlayed:(id)arg25 errorType:(unsigned int)arg26 associatedMessageGUID:(id)arg27 associatedMessageType:(long long)arg28 associatedMessageRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg29 bizIntent:(id)arg30 locale:(id)arg31 biaReferenceID:(id)arg32 messageSummaryInfo:(id)arg33 partCount:(unsigned long long)arg34 threadIdentifier:(id)arg35;
- (id)initWithSenderInfo:(id)arg1 time:(id)arg2 timeRead:(id)arg3 timeDelivered:(id)arg4 timePlayed:(id)arg5 subject:(id)arg6 body:(id)arg7 bodyData:(id)arg8 attributes:(id)arg9 fileTransferGUIDs:(id)arg10 flags:(unsigned long long)arg11 guid:(id)arg12 messageID:(long long)arg13 account:(id)arg14 accountID:(id)arg15 service:(id)arg16 handle:(id)arg17 roomName:(id)arg18 unformattedID:(id)arg19 countryCode:(id)arg20 expireState:(long long)arg21 balloonBundleID:(id)arg22 payloadData:(id)arg23 expressiveSendStyleID:(id)arg24 timeExpressiveSendPlayed:(id)arg25 errorType:(unsigned int)arg26 associatedMessageGUID:(id)arg27 associatedMessageType:(long long)arg28 associatedMessageRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg29 bizIntent:(id)arg30 locale:(id)arg31 biaReferenceID:(id)arg32 messageSummaryInfo:(id)arg33 partCount:(unsigned long long)arg34 threadIdentifier:(id)arg35 scheduled:(bool)arg36;
- (bool)isAssociatedMessageItem;
- (bool)isBreadcrumb;
- (bool)isEmojiSticker;
- (bool)isEqual:(id)arg1;
- (bool)isFirstMessageCandidate;
- (bool)isLastMessageCandidate;
- (bool)isMessageAcknowledgment;
- (bool)isSticker;
- (void)setAssociatedMessageGUID:(id)arg1;
- (void)setAssociatedMessageRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setAssociatedMessageType:(long long)arg1;
- (void)setConsumedSessionPayloads:(id)arg1;
- (void)setEmojiSticker:(id)arg1;
- (void)setTapback:(id)arg1;
- (id)tapback;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (id)_newChatItems;
- (id)_newChatItemsWithChatContext:(id)arg1;
- (bool)isCancelTypingMessage;
- (bool)isIncomingTypingMessage;
- (bool)isIncomingTypingOrCancelTypingMessage;
- (bool)isTypingOrCancelTypingMessage;
- (bool)shouldGenerateTopLevelChatItem;

@end
