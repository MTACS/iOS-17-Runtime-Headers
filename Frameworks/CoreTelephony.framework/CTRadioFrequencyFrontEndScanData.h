
@interface CTRadioFrequencyFrontEndScanData : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _hwHousing;
    unsigned long long  _hwPrdId;
    unsigned long long  _hwRev;
    unsigned long long  _hwSku;
    unsigned long long  _numDetectedDevices;
    unsigned long long  _numExpectedDevices;
    unsigned long long  _numMissingDevices;
    unsigned long long  _rfcHwid;
    bool  _rfcInitPass;
    unsigned long long  _rfcMmwHwid;
    unsigned long long  _rfcMmwRev;
    unsigned long long  _rfcRev;
    NSMutableArray * _rffeScanInfo;
    bool  _rffeScanPass;
    unsigned long long  _version;
}

@property (nonatomic) unsigned long long hwHousing;
@property (nonatomic) unsigned long long hwPrdId;
@property (nonatomic) unsigned long long hwRev;
@property (nonatomic) unsigned long long hwSku;
@property (nonatomic) unsigned long long numDetectedDevices;
@property (nonatomic) unsigned long long numExpectedDevices;
@property (nonatomic) unsigned long long numMissingDevices;
@property (nonatomic) unsigned long long rfcHwid;
@property (nonatomic) bool rfcInitPass;
@property (nonatomic) unsigned long long rfcMmwHwid;
@property (nonatomic) unsigned long long rfcMmwRev;
@property (nonatomic) unsigned long long rfcRev;
@property (nonatomic, retain) NSMutableArray *rffeScanInfo;
@property (nonatomic) bool rffeScanPass;
@property (nonatomic) unsigned long long version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hwHousing;
- (unsigned long long)hwPrdId;
- (unsigned long long)hwRev;
- (unsigned long long)hwSku;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)numDetectedDevices;
- (unsigned long long)numExpectedDevices;
- (unsigned long long)numMissingDevices;
- (unsigned long long)rfcHwid;
- (bool)rfcInitPass;
- (unsigned long long)rfcMmwHwid;
- (unsigned long long)rfcMmwRev;
- (unsigned long long)rfcRev;
- (id)rffeScanInfo;
- (bool)rffeScanPass;
- (void)setHwHousing:(unsigned long long)arg1;
- (void)setHwPrdId:(unsigned long long)arg1;
- (void)setHwRev:(unsigned long long)arg1;
- (void)setHwSku:(unsigned long long)arg1;
- (void)setNumDetectedDevices:(unsigned long long)arg1;
- (void)setNumExpectedDevices:(unsigned long long)arg1;
- (void)setNumMissingDevices:(unsigned long long)arg1;
- (void)setRfcHwid:(unsigned long long)arg1;
- (void)setRfcInitPass:(bool)arg1;
- (void)setRfcMmwHwid:(unsigned long long)arg1;
- (void)setRfcMmwRev:(unsigned long long)arg1;
- (void)setRfcRev:(unsigned long long)arg1;
- (void)setRffeScanInfo:(id)arg1;
- (void)setRffeScanPass:(bool)arg1;
- (void)setVersion:(unsigned long long)arg1;
- (unsigned long long)version;

@end
