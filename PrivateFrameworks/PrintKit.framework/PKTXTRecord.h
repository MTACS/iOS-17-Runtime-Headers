
@interface PKTXTRecord : NSObject <NSSecureCoding> {
    NSMutableDictionary * _seenDict;
    NSDictionary * _stringDict;
}

@property (readonly) NSUUID *UUID;
@property (readonly) NSURL *adminURL;
@property (readonly) NSString *authInfoRequired;
@property (readonly) NSString *location;
@property (readonly) NSString *optionPaperMax;
@property (readonly) long long optionPriority;
@property (readonly) long long optionPunch;
@property (readonly) long long optionQueueTotal;
@property (readonly) NSArray *pageDescriptions;
@property (readonly) NSArray *printerKind;
@property (readonly) NSString *printerProduct;
@property (readonly) NSString *printerType;
@property (readonly) NSString *resourcePath;
@property (readonly) unsigned long long supportsBind;
@property (readonly) unsigned long long supportsCollate;
@property (readonly) unsigned long long supportsColor;
@property (readonly) unsigned long long supportsCopies;
@property (readonly) unsigned long long supportsDuplex;
@property (readonly) unsigned long long supportsFax;
@property (readonly) unsigned long long supportsScan;
@property (readonly) unsigned long long supportsSort;
@property (readonly) unsigned long long supportsStaple;
@property (readonly) unsigned short tlsVersion;
@property (readonly) NSArray *urfCapabilities;
@property (readonly) NSString *versionString;

+ (bool)supportsSecureCoding;
+ (id)txtRecordDictionaryForTxtRecord:(id)arg1;

- (void).cxx_destruct;
- (id)UUID;
- (id)_checkMake:(id)arg1 propertyName:(id)arg2 maker:(id /* block */)arg3;
- (unsigned long long)_checkMakeAvail:(id)arg1 propertyName:(id)arg2;
- (long long)_checkMakeInt:(id)arg1 propertyName:(id)arg2;
- (id)_checkMakeString:(id)arg1 propertyName:(id)arg2;
- (id)_checkMakeStringArray:(id)arg1 propertyName:(id)arg2;
- (unsigned short)_checkMakeTLS:(id)arg1 propertyName:(id)arg2;
- (id)_checkMakeURL:(id)arg1 propertyName:(id)arg2;
- (id)_checkMakeUUID:(id)arg1 propertyName:(id)arg2;
- (id)_initWithLowercasedDictionary:(id)arg1;
- (id)_stringValueForKey:(id)arg1;
- (id)_wrapProduct:(id)arg1;
- (id)adminURL;
- (id)authInfoRequired;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithNWTXTRecord:(id)arg1;
- (id)initWithTXTRecordData:(id)arg1;
- (id)location;
- (id)optionPaperMax;
- (long long)optionPriority;
- (long long)optionPunch;
- (long long)optionQueueTotal;
- (id)pageDescriptions;
- (id)printerKind;
- (id)printerProduct;
- (id)printerType;
- (id)resourcePath;
- (unsigned long long)supportsBind;
- (unsigned long long)supportsCollate;
- (unsigned long long)supportsColor;
- (unsigned long long)supportsCopies;
- (unsigned long long)supportsDuplex;
- (unsigned long long)supportsFax;
- (unsigned long long)supportsScan;
- (unsigned long long)supportsSort;
- (unsigned long long)supportsStaple;
- (unsigned short)tlsVersion;
- (id)urfCapabilities;
- (id)versionString;

@end
