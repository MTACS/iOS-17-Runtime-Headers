
@interface DSIODeviceIdentifier : NSObject {
    unsigned long long  _accessoryModel;
    unsigned int  _productID;
    unsigned int  _usage;
    unsigned int  _usagePage;
    unsigned int  _vendorID;
}

@property (nonatomic, readonly) unsigned long long accessoryModel;
@property (nonatomic, readonly) unsigned int productID;
@property (nonatomic, readonly) unsigned int usage;
@property (nonatomic, readonly) unsigned int usagePage;
@property (nonatomic, readonly) unsigned int vendorID;

+ (id)identifierForAccessoryModel:(unsigned long long)arg1;
+ (id)identifierForIOHIDDevice:(struct __IOHIDDevice { }*)arg1;

- (unsigned long long)accessoryModel;
- (id)initWithAccessoryModel:(unsigned long long)arg1 usagePage:(unsigned int)arg2 usage:(unsigned int)arg3 vendorID:(unsigned int)arg4 productID:(unsigned int)arg5;
- (unsigned int)productID;
- (unsigned int)usage;
- (unsigned int)usagePage;
- (unsigned int)vendorID;

@end
