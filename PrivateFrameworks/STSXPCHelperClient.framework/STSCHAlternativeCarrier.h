
@interface STSCHAlternativeCarrier : NSObject <NSSecureCoding> {
    NSArray * _auxiliaryRecords;
    STSNDEFRecord * _carrierRecord;
    unsigned long long  _powerState;
    unsigned long long  _type;
}

@property (nonatomic, retain) NSArray *auxiliaryRecords;
@property (nonatomic, retain) STSNDEFRecord *carrierRecord;
@property (nonatomic) unsigned long long powerState;
@property (nonatomic) unsigned long long type;

+ (id)connectionHandoverAlternativeCarrierWithBundle:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_createCarrierConfigurationRecord;
- (id)auxiliaryRecords;
- (id)carrierRecord;
- (id)createAlternativeCarrierRecord;
- (id)createNdefRecordBundle;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNdefRecordBundle:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)powerState;
- (void)setAuxiliaryRecords:(id)arg1;
- (void)setCarrierRecord:(id)arg1;
- (void)setPowerState:(unsigned long long)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
