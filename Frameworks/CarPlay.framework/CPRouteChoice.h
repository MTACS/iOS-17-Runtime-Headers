
@interface CPRouteChoice : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _additionalInformationVariants;
    NSUUID * _identifier;
    NSArray * _selectionSummaryVariants;
    NSArray * _summaryVariants;
    id  _userInfo;
}

@property (nonatomic, copy) NSArray *additionalInformationVariants;
@property (nonatomic, retain) NSUUID *identifier;
@property (nonatomic, copy) NSArray *selectionSummaryVariants;
@property (nonatomic, copy) NSArray *summaryVariants;
@property (nonatomic, retain) id userInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)additionalInformationVariants;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSummaryVariants:(id)arg1 additionalInformationVariants:(id)arg2 selectionSummaryVariants:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)selectionSummaryVariants;
- (void)setAdditionalInformationVariants:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setSelectionSummaryVariants:(id)arg1;
- (void)setSummaryVariants:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)summaryVariants;
- (id)userInfo;

@end
