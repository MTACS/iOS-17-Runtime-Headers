
@interface PKAccountPostProvisioningContent : NSObject {
    NSString * _body;
    NSString * _primaryButtonTitle;
    NSString * _secondaryButtonTitle;
    NSString * _subTitle;
    NSString * _title;
    unsigned long long  _type;
}

@property (nonatomic, readonly, copy) NSString *body;
@property (nonatomic, readonly, copy) NSString *primaryButtonTitle;
@property (nonatomic, readonly, copy) NSString *secondaryButtonTitle;
@property (nonatomic, readonly, copy) NSString *subTitle;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (id)body;
- (id)initWithDictionary:(id)arg1;
- (id)primaryButtonTitle;
- (id)secondaryButtonTitle;
- (void)setType:(unsigned long long)arg1;
- (id)subTitle;
- (id)title;
- (unsigned long long)type;

@end
