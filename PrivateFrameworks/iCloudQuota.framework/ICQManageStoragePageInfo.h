
@interface ICQManageStoragePageInfo : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _specifiers;
    NSString * _storageGraphFooterText;
    NSArray * _tips;
    NSString * _title;
}

@property (nonatomic, retain) NSArray *specifiers;
@property (nonatomic, copy) NSString *storageGraphFooterText;
@property (nonatomic, retain) NSArray *tips;
@property (nonatomic, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initFromDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setSpecifiers:(id)arg1;
- (void)setStorageGraphFooterText:(id)arg1;
- (void)setTips:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)specifiers;
- (id)storageGraphFooterText;
- (id)tips;
- (id)title;

@end
