
@interface CKPinnedConversationContactItemFromHandle : NSObject <CKPinnedConversationContactItem> {
    long long  _contactItemAlignment;
    double  _contentScale;
    CKEntity * _entity;
}

@property (nonatomic) long long contactItemAlignment;
@property (nonatomic, readonly) NSString *contactItemIdentifier;
@property (nonatomic) double contentScale;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CKEntity *entity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cnContactWithKeys:(id)arg1;
- (long long)contactItemAlignment;
- (id)contactItemIdentifier;
- (id)contactItemView;
- (double)contentScale;
- (id)entity;
- (id)initWithEntity:(id)arg1;
- (void)setContactItemAlignment:(long long)arg1;
- (void)setContentScale:(double)arg1;
- (void)setEntity:(id)arg1;

@end
