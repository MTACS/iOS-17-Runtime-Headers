
@interface UARPSuperBinaryAssetTLV : NSObject {
    NSData * _data;
    NSString * _string;
    unsigned long long  _type;
    NSURL * _url;
    unsigned short  _val16;
    unsigned int  _val32;
    unsigned long long  _val64;
    unsigned char  _val8;
    int  _valueType;
    struct UARPVersion { 
        unsigned int major; 
        unsigned int minor; 
        unsigned int release; 
        unsigned int build; 
    }  _version;
    struct uarpPayloadVersionInfo { 
        struct UARP4ccTag { 
            unsigned char char1; 
            unsigned char char2; 
            unsigned char char3; 
            unsigned char char4; 
        } tag; 
        struct UARPVersion { 
            unsigned int major; 
            unsigned int minor; 
            unsigned int release; 
            unsigned int build; 
        } activeVersion; 
        struct UARPVersion { 
            unsigned int major; 
            unsigned int minor; 
            unsigned int release; 
            unsigned int build; 
        } stagedVersion; 
    }  _versionInfo;
}

@property (readonly) unsigned long long type;
@property (readonly) NSData *valueAsData;
@property (readonly) NSNumber *valueAsNumber;
@property (readonly) NSString *valueAsString;
@property (readonly) NSArray *valueAsTLVs;
@property (readonly) UARPAssetVersion *valueAsVersion;

+ (id)decomposeTLVs:(id)arg1;
+ (id)findTLVWithType:(unsigned long long)arg1 tlvs:(id)arg2;
+ (id)findTLVsWithType:(unsigned long long)arg1 tlvs:(id)arg2;

- (void).cxx_destruct;
- (id)description;
- (id)generateTLV:(id*)arg1;
- (id)initWithType:(unsigned long long)arg1 dataValue:(id)arg2;
- (id)initWithType:(unsigned long long)arg1 stringValue:(id)arg2;
- (id)initWithType:(unsigned long long)arg1 tagValue:(id)arg2;
- (id)initWithType:(unsigned long long)arg1 tlvLength:(unsigned long long)arg2 tlvValue:(void*)arg3;
- (id)initWithType:(unsigned long long)arg1 unsignedInt16:(unsigned short)arg2;
- (id)initWithType:(unsigned long long)arg1 unsignedInt32:(unsigned int)arg2;
- (id)initWithType:(unsigned long long)arg1 unsignedInt64:(unsigned long long)arg2;
- (id)initWithType:(unsigned long long)arg1 unsignedInt8:(unsigned char)arg2;
- (id)initWithType:(unsigned long long)arg1 urlValue:(id)arg2;
- (id)initWithType:(unsigned long long)arg1 version:(struct UARPVersion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)arg2;
- (id)initWithType:(unsigned long long)arg1 versionInfo:(struct uarpPayloadVersionInfo { struct UARP4ccTag { unsigned char x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; unsigned char x_1_1_4; } x1; struct UARPVersion { unsigned int x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; unsigned int x_2_1_4; } x2; struct UARPVersion { unsigned int x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; } x3; }*)arg2;
- (unsigned long long)type;
- (id)valueAsData;
- (id)valueAsNumber;
- (id)valueAsString;
- (id)valueAsTLVs;
- (id)valueAsVersion;

@end
