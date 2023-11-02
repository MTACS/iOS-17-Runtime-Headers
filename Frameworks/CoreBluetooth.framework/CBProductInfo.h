
@interface CBProductInfo : NSObject {
    unsigned int  _flags;
    NSString * _model;
    unsigned int  _productID;
    NSString * _productName;
    unsigned int  _radarComponentID;
    NSString * _sfSymbolNameCase;
    NSString * _sfSymbolNameMain;
    unsigned short  _vendorIDBluetooth;
    unsigned short  _vendorIDUSB;
}

@property (nonatomic, readonly) unsigned int flags;
@property (nonatomic, readonly, copy) NSString *model;
@property (nonatomic, readonly) unsigned int productID;
@property (nonatomic, readonly, copy) NSString *productName;
@property (nonatomic, readonly) unsigned int radarComponentID;
@property (nonatomic, readonly, copy) NSString *sfSymbolNameCase;
@property (nonatomic, readonly, copy) NSString *sfSymbolNameMain;
@property (nonatomic, readonly) unsigned short vendorIDBluetooth;
@property (nonatomic, readonly) unsigned short vendorIDUSB;

+ (id)productInfoWithProductID:(unsigned int)arg1;

- (void).cxx_destruct;
- (unsigned int)flags;
- (id)initWithProductInfoPtr:(const struct { unsigned int x1; id x2; unsigned int x3; id x4; unsigned int x5; id x6; id x7; unsigned short x8; unsigned short x9; }*)arg1;
- (id)model;
- (unsigned int)productID;
- (id)productName;
- (unsigned int)radarComponentID;
- (id)sfSymbolNameCase;
- (id)sfSymbolNameMain;
- (unsigned short)vendorIDBluetooth;
- (unsigned short)vendorIDUSB;

@end
