
@interface CBSGestaltEquipmentInfo : NSObject {
    NSArray * _imeiArray;
    NSString * _meid;
    NSString * _serialNumber;
}

@property (nonatomic, readonly) NSArray *imeiArray;
@property (nonatomic, readonly) NSString *meid;
@property (nonatomic, readonly) NSString *serialNumber;

+ (id)CurrentEquipmentInfo;

- (void).cxx_destruct;
- (id)imeiArray;
- (id)initWithSerialNumber:(id)arg1 andMEID:(id)arg2 andIMEIArray:(id)arg3;
- (id)meid;
- (id)serialNumber;

@end
