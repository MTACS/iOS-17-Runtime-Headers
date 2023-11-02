
@interface PKPeerPaymentRequiredFieldsPage : NSObject {
    NSArray * _actions;
    NSString * _localizedDescription;
    NSString * _localizedTitle;
    NSString * _requestToken;
    NSArray * _requiredFields;
    NSString * _status;
}

@property (nonatomic, copy) NSArray *actions;
@property (nonatomic, copy) NSString *localizedDescription;
@property (nonatomic, copy) NSString *localizedTitle;
@property (nonatomic, copy) NSString *requestToken;
@property (nonatomic, retain) NSArray *requiredFields;
@property (nonatomic, copy) NSString *status;

- (void).cxx_destruct;
- (id)actions;
- (id)initWithDictionary:(id)arg1 fieldOptions:(id)arg2;
- (id)localizedDescription;
- (id)localizedTitle;
- (id)requestToken;
- (id)requiredFields;
- (void)setActions:(id)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)setRequestToken:(id)arg1;
- (void)setRequiredFields:(id)arg1;
- (void)setStatus:(id)arg1;
- (id)status;

@end
