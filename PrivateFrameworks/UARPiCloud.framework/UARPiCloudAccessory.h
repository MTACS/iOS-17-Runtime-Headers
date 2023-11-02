
@interface UARPiCloudAccessory : NSObject <NSCopying> {
    NSMutableArray * _availableRecords;
    CHIPAccessoryFirmwareRecord * _chipFirmwareRecord;
    NSString * _firmwareVersion;
    NSString * _productGroup;
    NSString * _productNumber;
    UARPiCloudAccessoryRecord * _record;
    bool  _signatureValidationNeeded;
}

@property (copy) NSMutableArray *availableRecords;
@property (retain) CHIPAccessoryFirmwareRecord *chipFirmwareRecord;
@property (readonly) NSString *firmwareVersion;
@property (readonly) NSString *productGroup;
@property (readonly) NSString *productNumber;
@property (retain) UARPiCloudAccessoryRecord *record;
@property bool signatureValidationNeeded;

- (void).cxx_destruct;
- (id)availableRecords;
- (id)chipFirmwareRecord;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)firmwareVersion;
- (unsigned long long)hash;
- (id)initWithProductGroup:(id)arg1 productNumber:(id)arg2 firmwareVersion:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)productGroup;
- (id)productNumber;
- (id)record;
- (void)setAvailableRecords:(id)arg1;
- (void)setChipFirmwareRecord:(id)arg1;
- (void)setRecord:(id)arg1;
- (void)setSignatureValidationNeeded:(bool)arg1;
- (bool)signatureValidationNeeded;

@end
