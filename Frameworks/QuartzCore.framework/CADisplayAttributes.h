
@interface CADisplayAttributes : NSObject {
    struct EDIDAttributes { 
        int dolbyVision; 
        int pqEOTF; 
        int bt2020YCC; 
        int hdrStaticMetadataType1; 
        int discreteMediaRefreshRate; 
        bool legacyHDMI; 
        unsigned int product_id; 
        unsigned int manufacturer_id; 
        unsigned int week_of_manufacture; 
        unsigned int year_of_manufacture; 
        unsigned int serial_number; 
    }  _edid_attributes;
}

@property (readonly) long long bt2020YCC;
@property (readonly) long long dolbyVision;
@property (readonly) long long hdrStaticMetadataType1;
@property (readonly) bool legacyHDMIEDID;
@property (readonly) unsigned int manufacturerID;
@property (readonly) long long pqEOTF;
@property (readonly) unsigned int productID;
@property (readonly) unsigned int serialNumber;
@property (readonly) unsigned int weekOfManufacture;
@property (readonly) unsigned int yearOfManufacture;

- (id).cxx_construct;
- (id)_initWithAttributes:(struct EDIDAttributes { int x1; int x2; int x3; int x4; int x5; bool x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; })arg1;
- (long long)bt2020YCC;
- (long long)dolbyVision;
- (long long)hdrStaticMetadataType1;
- (bool)legacyHDMIEDID;
- (unsigned int)manufacturerID;
- (long long)pqEOTF;
- (unsigned int)productID;
- (unsigned int)serialNumber;
- (unsigned int)weekOfManufacture;
- (unsigned int)yearOfManufacture;

@end
