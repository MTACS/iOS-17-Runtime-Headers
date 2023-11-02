
@interface IMTapback : NSObject <IMRemoteObjectCoding, NSCopying, NSSecureCoding> {
    long long  _associatedMessageType;
    NSString * _representation;
    NSString * _serializedTapbackString;
}

@property (nonatomic, readonly) long long associatedMessageType;
@property (nonatomic, readonly) IMTapback *counterpart;
@property (getter=isRemoved, nonatomic, readonly) bool removed;
@property (nonatomic, readonly) IMTapback *removedTapbackCounterpart;
@property (nonatomic, readonly) NSString *representation;
@property (getter=isSendable, nonatomic, readonly) bool sendable;
@property (nonatomic, readonly) NSString *serializedTapbackString;
@property (nonatomic, readonly) IMTapback *visibleTapbackCounterpart;

// Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities

+ (bool)isValidAssociatedMessageType:(long long)arg1;
+ (bool)isValidRepresentation:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)tapbackWithAssociatedMessageType:(long long)arg1 messageSummaryInfo:(id)arg2;
+ (id)tapbackWithAssociatedMessageType:(long long)arg1 messageSummaryInfo:(id)arg2 usePlaceholderEmojiIfNeeded:(bool)arg3;
+ (id)tapbackWithAssociatedMessageType:(long long)arg1 representation:(id)arg2;
+ (id)tapbackWithAssociatedMessageType:(long long)arg1 representation:(id)arg2 usePlaceholderEmojiIfNeeded:(bool)arg3;
+ (id)tapbackWithSerializedString:(id)arg1;
+ (id)tapbacksForAssociatedMessageTypes:(id)arg1;

- (void).cxx_destruct;
- (id)actionString;
- (long long)associatedMessageType;
- (id)backwardCompatibilityStringFormatForMessageSummaryInfo:(id)arg1;
- (id)backwardCompatibilityStringWithMessageSummaryInfo:(id)arg1;
- (id)contentTypeStringForMessageSummaryInfo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)counterpart;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithIMRemoteObjectSerializedDictionary:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAssociatedMessageType:(long long)arg1;
- (id)initWithAssociatedMessageType:(long long)arg1 representation:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithIMRemoteObjectSerializedDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isRemoved;
- (bool)isSendable;
- (id)longContentTypeStringForPluginBundleID:(id)arg1 pluginDisplayName:(id)arg2;
- (id)previewStringFormatForMessageSummaryInfo:(id)arg1 isFromMe:(bool)arg2;
- (id)previewStringWithMessageSummaryInfo:(id)arg1 senderDisplayName:(id)arg2 isFromMe:(bool)arg3;
- (id)removedTapbackCounterpart;
- (id)representation;
- (id)serializedTapbackString;
- (bool)shouldQuoteContentString:(id)arg1;
- (id)visibleTapbackCounterpart;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (id)adjustMessageSummaryInfoForSending:(id)arg1;

@end
