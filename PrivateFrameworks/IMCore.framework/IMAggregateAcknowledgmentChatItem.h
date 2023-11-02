
@interface IMAggregateAcknowledgmentChatItem : IMAssociatedMessageChatItem {
    NSArray * _acknowledgments;
    IMMessageAcknowledgmentChatItem * _fromMeAcknowledgement;
    bool  _includesMultiple;
    bool  _latestIsFromMe;
    IMTapback * _latestTapback;
}

@property (nonatomic, readonly, copy) NSArray *acknowledgments;
@property (nonatomic, readonly) IMMessageAcknowledgmentChatItem *fromMeAcknowledgement;
@property (nonatomic, readonly) bool includesFromMe;
@property (nonatomic, readonly) bool includesMultiple;
@property (nonatomic, readonly) bool latestIsFromMe;
@property (nonatomic, readonly) IMTapback *latestTapback;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (void).cxx_destruct;
- (id)_initWithAcknowledgments:(id)arg1;
- (id)acknowledgments;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)fromMeAcknowledgement;
- (unsigned long long)hash;
- (bool)includesFromMe;
- (bool)includesMultiple;
- (bool)isEqual:(id)arg1;
- (bool)latestIsFromMe;
- (id)latestTapback;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (Class)__ck_chatItemClass;

@end
