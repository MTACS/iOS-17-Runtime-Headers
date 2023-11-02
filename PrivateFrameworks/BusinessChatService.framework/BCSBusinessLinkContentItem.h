
@interface BCSBusinessLinkContentItem : NSObject <BCSBusinessLinkContentItemDescribing> {
    BCSBusinessLinkContentItemModel * _businessLinkContentItemModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isDefault, nonatomic, readonly) bool isDefault;
@property (nonatomic, readonly, copy) NSString *language;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (id)description;
- (bool)isDefault;
- (id)language;
- (id)subtitle;
- (id)title;

@end
