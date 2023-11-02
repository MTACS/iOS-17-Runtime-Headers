
@interface PSUICellularPlanUniversalReference : NSObject <NSCoding, NSCopying> {
    NSString * _iccid;
}

@property (nonatomic, retain) NSString *iccid;

+ (id)referenceFromCellularPlanPendingTransfer:(id)arg1;
+ (id)referenceFromDanglingPlanItem:(id)arg1;
+ (id)referenceFromPlanItem:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)getLogger;
- (unsigned long long)hash;
- (id)iccid;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIccid:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setIccid:(id)arg1;

@end
