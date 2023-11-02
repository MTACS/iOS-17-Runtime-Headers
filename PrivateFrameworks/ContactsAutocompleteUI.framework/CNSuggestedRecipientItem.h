
@interface CNSuggestedRecipientItem : NSObject {
    NSMutableSet * _handles;
    bool  _isSelected;
    CNComposeRecipient * _recipient;
    NSString * _title;
}

@property (nonatomic, retain) NSMutableSet *handles;
@property (nonatomic) bool isSelected;
@property (nonatomic, retain) CNComposeRecipient *recipient;
@property (nonatomic, copy) NSString *title;

+ (id)os_log;

- (void).cxx_destruct;
- (id)description;
- (id)handles;
- (unsigned long long)hash;
- (id)initWithRecipient:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isSelected;
- (bool)isSelectedForHandles:(id)arg1;
- (void)loadHandles;
- (id)recipient;
- (void)setHandles:(id)arg1;
- (void)setIsSelected:(bool)arg1;
- (void)setRecipient:(id)arg1;
- (void)setTitle:(id)arg1;
- (bool)shouldDeselectForHandles:(id)arg1;
- (id)title;

@end
