
@interface PKPaymentSetupChooseProductListItem : NSObject <PKIdentifiable> {
    NSString * _identifier;
    bool  _loadingIndicatorVisible;
    NSString * _subtitle;
    NSString * _title;
    unsigned long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) bool loadingIndicatorVisible;
@property (nonatomic, retain) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 title:(id)arg3 subtitle:(id)arg4;
- (bool)loadingIndicatorVisible;
- (void)setIdentifier:(id)arg1;
- (void)setLoadingIndicatorVisible:(bool)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (id)subtitle;
- (id)title;
- (unsigned long long)type;

@end
