
@interface CTInstalledPlan : NSObject <NSSecureCoding> {
    bool  _isSelected;
    CTPlanIdentifier * _planID;
    CTPlanTransferAttributes * _transferAttributes;
}

@property (nonatomic) bool isSelected;
@property (nonatomic, retain) CTPlanIdentifier *planID;
@property (nonatomic, retain) CTPlanTransferAttributes *transferAttributes;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)carrierName;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)iccid;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isSelected;
- (id)phoneNumber;
- (id)planID;
- (void)setIsSelected:(bool)arg1;
- (void)setPlanID:(id)arg1;
- (void)setTransferAttributes:(id)arg1;
- (id)transferAttributes;

@end
