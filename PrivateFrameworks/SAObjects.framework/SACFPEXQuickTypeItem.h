
@interface SACFPEXQuickTypeItem : SACFPEXItem

@property (nonatomic, copy) NSArray *fields;
@property (nonatomic, copy) NSArray *itemFlags;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *originatingBundleId;
@property (nonatomic, copy) NSString *originatingWebsiteURL;
@property (nonatomic, copy) NSDate *startDate;
@property (nonatomic, copy) NSString *value;

+ (id)quickTypeItem;
+ (id)quickTypeItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)fields;
- (id)groupIdentifier;
- (id)itemFlags;
- (id)label;
- (id)name;
- (id)originatingBundleId;
- (id)originatingWebsiteURL;
- (void)setFields:(id)arg1;
- (void)setItemFlags:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOriginatingBundleId:(id)arg1;
- (void)setOriginatingWebsiteURL:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setValue:(id)arg1;
- (id)startDate;
- (id)value;

@end
