
@interface HKVerifiableClinicalRecordDisplayItem : NSObject {
    NSAttributedString * _attributedDetailText;
    NSString * _detailText;
    long long  _subtitleStyle;
    NSString * _titleText;
    long long  _type;
}

@property (nonatomic, retain) NSAttributedString *attributedDetailText;
@property (nonatomic, retain) NSString *detailText;
@property (nonatomic) long long subtitleStyle;
@property (nonatomic, retain) NSString *titleText;
@property (nonatomic) long long type;

+ (id)subtitleItemWithTitleText:(id)arg1 detailText:(id)arg2 style:(long long)arg3;
+ (id)valueItemWithTitleText:(id)arg1 attributedDetailText:(id)arg2;
+ (id)valueItemWithTitleText:(id)arg1 detailText:(id)arg2;

- (void).cxx_destruct;
- (id)attributedDetailText;
- (id)detailText;
- (void)setAttributedDetailText:(id)arg1;
- (void)setDetailText:(id)arg1;
- (void)setSubtitleStyle:(long long)arg1;
- (void)setTitleText:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)subtitleStyle;
- (id)titleText;
- (long long)type;

@end
