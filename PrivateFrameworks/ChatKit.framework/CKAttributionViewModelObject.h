
@interface CKAttributionViewModelObject : NSObject {
    NSArray * _associatedMessageItems;
    NSArray * _contacts;
    CKAttributionViewModelObjectIdentifier * _identifier;
    long long  _senderCount;
    NSArray * _senders;
}

@property (nonatomic, readonly) NSArray *associatedMessageItems;
@property (nonatomic, readonly) UIImage *attributionImage;
@property (nonatomic, readonly) UIColor *attributionImageTintColor;
@property (nonatomic, readonly) NSArray *contacts;
@property (nonatomic, readonly) CKAttributionViewModelObjectIdentifier *identifier;
@property (nonatomic, readonly) CKAssociatedMessageChatItem *mostRecentChatItem;
@property (nonatomic, readonly) NSDate *mostRecentSendDate;
@property (nonatomic, readonly) bool representsSticker;
@property (nonatomic, readonly) bool representsTapback;
@property (nonatomic, readonly) long long senderCount;
@property (nonatomic, readonly) NSArray *senders;

- (void).cxx_destruct;
- (id)associatedMessageItems;
- (id)attributionImage;
- (id)attributionImageTintColor;
- (id)contacts;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 associatedMessageItems:(id)arg2;
- (id)mostRecentChatItem;
- (id)mostRecentSendDate;
- (bool)representsSticker;
- (bool)representsTapback;
- (long long)senderCount;
- (id)senders;

@end
