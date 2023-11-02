
@interface PKPeerPaymentRecurringPaymentDetailRowItem : NSObject <PKIdentifiable> {
    NSString * _identifier;
    bool  _isEditable;
    UIColor * _titleColor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) bool isEditable;
@property (readonly) Class superclass;
@property (nonatomic, copy) UIColor *titleColor;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 isEditable:(bool)arg2 titleColor:(id)arg3;
- (bool)isEditable;
- (bool)isEqual:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsEditable:(bool)arg1;
- (void)setTitleColor:(id)arg1;
- (id)titleColor;

@end
