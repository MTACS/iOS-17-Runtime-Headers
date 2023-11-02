
@interface PKPrinterBrowseInfo : NSObject <NSSecureCoding> {
    PKPrinterBonjourEndpoint * _bonjourName;
    long long  _btleMeasuredPower;
    NSUUID * _btleUUID;
    NSUUID * _cachedUUID;
    long long  _proximity;
    NSDictionary * _txtRecord;
}

@property (readonly) PKPrinterBonjourEndpoint *bonjourName;
@property long long btleMeasuredPower;
@property (retain) NSUUID *btleUUID;
@property (readonly) bool isIPPS;
@property (readonly) NSString *location;
@property (readonly) NSString *makeAndModel;
@property (readonly) NSURL *printerURL;
@property long long proximity;
@property (readonly) NSDictionary *txtRecord;
@property (readonly) long long type;
@property (readonly) NSUUID *uuid;

+ (void)findPrinterWithBonjourEndpoint:(id)arg1 withTimeout:(double)arg2 completionHandler:(id /* block */)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bonjourName;
- (long long)btleMeasuredPower;
- (id)btleUUID;
- (long long)compare:(id)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBonjourName:(id)arg1 txtRecord:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithResolvedBonjourName:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToBrowseInfo:(id)arg1;
- (bool)isIPPS;
- (id)location;
- (id)makeAndModel;
- (id)printerURL;
- (long long)proximity;
- (void)resolveOnMainQueue:(id /* block */)arg1;
- (void)setBtleMeasuredPower:(long long)arg1;
- (void)setBtleUUID:(id)arg1;
- (void)setProximity:(long long)arg1;
- (id)txtRecord;
- (id)txtRecordObjectForKey:(id)arg1;
- (long long)type;
- (id)uuid;

@end
