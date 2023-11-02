
@interface SMSFilterExtensionParams : NSObject <NSCoding, NSSecureCoding> {
    unsigned long long  _action;
    unsigned long long  _category;
    unsigned long long  _filterMode;
    NSString * _filterModeStringValue;
    NSString * _folderName;
    NSString * _iconName;
    NSString * _label;
    unsigned long long  _orderOfPlacementInUI;
    unsigned long long  _subAction;
    unsigned long long  _subCategory;
}

@property unsigned long long action;
@property unsigned long long category;
@property unsigned long long filterMode;
@property (nonatomic, retain) NSString *filterModeStringValue;
@property (nonatomic, retain) NSString *folderName;
@property (nonatomic, retain) NSString *iconName;
@property (nonatomic, retain) NSString *label;
@property unsigned long long orderOfPlacementInUI;
@property unsigned long long subAction;
@property unsigned long long subCategory;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)action;
- (unsigned long long)category;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)filterMode;
- (id)filterModeStringValue;
- (id)folderName;
- (id)iconName;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)label;
- (unsigned long long)orderOfPlacementInUI;
- (void)setAction:(unsigned long long)arg1;
- (void)setCategory:(unsigned long long)arg1;
- (void)setFilterMode:(unsigned long long)arg1;
- (void)setFilterModeStringValue:(id)arg1;
- (void)setFolderName:(id)arg1;
- (void)setIconName:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setOrderOfPlacementInUI:(unsigned long long)arg1;
- (void)setSubAction:(unsigned long long)arg1;
- (void)setSubCategory:(unsigned long long)arg1;
- (unsigned long long)subAction;
- (unsigned long long)subCategory;

@end
