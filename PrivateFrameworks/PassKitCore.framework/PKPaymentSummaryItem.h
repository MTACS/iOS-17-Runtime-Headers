
@interface PKPaymentSummaryItem : NSObject <NSCopying, NSSecureCoding> {
    NSDecimalNumber * _amount;
    NSString * _label;
    NSString * _localizedAmount;
    NSString * _localizedTitle;
    unsigned long long  _type;
    bool  _useDarkColor;
    bool  _useLargeFont;
}

@property (nonatomic, copy) NSDecimalNumber *amount;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSString *localizedAmount;
@property (nonatomic, copy) NSString *localizedTitle;
@property (nonatomic) unsigned long long type;
@property (nonatomic) bool useDarkColor;
@property (nonatomic) bool useLargeFont;

+ (id)_automaticReloadPaymentSummaryItemWithProtobuf:(id)arg1;
+ (id)_deferredSummaryItemWithProtobuf:(id)arg1;
+ (id)_recurringSummaryItemWithProtobuf:(id)arg1;
+ (id)itemWithProtobuf:(id)arg1;
+ (id)summaryItemWithLabel:(id)arg1 amount:(id)arg2;
+ (id)summaryItemWithLabel:(id)arg1 amount:(id)arg2 type:(unsigned long long)arg3;
+ (bool)supportsSecureCoding;
+ (long long)version;

- (void).cxx_destruct;
- (id)_protobufAutomaticReloadPaymentSummaryItemForItem:(id)arg1;
- (id)_protobufDeferredSummaryItemForItem:(id)arg1;
- (id)_protobufRecurringSummaryItemForItem:(id)arg1;
- (id)amount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPaymentSummaryItem:(id)arg1;
- (id)label;
- (id)localizedAmount;
- (id)localizedTitle;
- (void)setAmount:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLocalizedAmount:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setUseDarkColor:(bool)arg1;
- (void)setUseLargeFont:(bool)arg1;
- (id)summaryItemProtobuf;
- (unsigned long long)type;
- (bool)useDarkColor;
- (bool)useLargeFont;

@end
