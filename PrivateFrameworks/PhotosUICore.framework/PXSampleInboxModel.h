
@interface PXSampleInboxModel : NSObject <PXInboxModel, PXInboxPreviewItem> {
    unsigned long long  _assetsCount;
    NSArray * _assetsForOneUp;
    NSDate * _creationDate;
    NSString * _inboxModelTitle;
    long long  _inboxModelType;
    bool  _seen;
    NSArray * _senderNames;
    long long  _type;
    bool  _userIsSender;
}

@property (nonatomic) unsigned long long assetsCount;
@property (nonatomic, readonly) NSArray *assetsForOneUp;
@property (nonatomic, retain) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *inboxModelTitle;
@property (nonatomic, readonly) long long inboxModelType;
@property (nonatomic, readonly) NSString *keyCommentGUID;
@property (nonatomic, readonly) NSArray *leftPreviewItems;
@property (nonatomic, readonly) NSString *ownerEmail;
@property (nonatomic, readonly) NSString *ownerFirstName;
@property (nonatomic, readonly) NSString *ownerLastName;
@property (getter=isSeen, nonatomic) bool seen;
@property (nonatomic, copy) NSArray *senderNames;
@property (readonly) Class superclass;
@property (nonatomic) long long type;
@property (nonatomic) bool userIsSender;

+ (id)oldDate;

- (void).cxx_destruct;
- (unsigned long long)assetsCount;
- (id)assetsForOneUp;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)inboxModelTitle;
- (long long)inboxModelType;
- (bool)isSeen;
- (id)leftPreviewItems;
- (id)senderNames;
- (void)setAssetsCount:(unsigned long long)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setInboxModelTitle:(id)arg1;
- (void)setSeen:(bool)arg1;
- (void)setSenderNames:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setUserIsSender:(bool)arg1;
- (long long)type;
- (bool)userIsSender;

@end
