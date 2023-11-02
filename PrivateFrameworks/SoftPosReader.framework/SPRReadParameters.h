
@interface SPRReadParameters : NSObject <NSSecureCoding> {
    struct { 
        unsigned int _exponent : 8; 
        unsigned int _length : 4; 
        unsigned int _isNegative : 1; 
        unsigned int _isCompact : 1; 
        unsigned int _reserved : 18; 
        unsigned short _mantissa[8]; 
    }  _amount;
    NSData * _currencyCode;
    NSData * _interfaceDeviceSerial;
    NSString * _kernelToken;
    NSData * _merchantCategoryCode;
    long long  _mode;
    NSArray * _preferredSchemes;
    NSData * _schemePreference;
    long long  _timeoutReadPay;
    long long  _timeoutReadVas;
    NSString * _transactionId;
    unsigned char  _transactionType;
    NSArray * _vasRequests;
}

@property (nonatomic, readonly) struct { unsigned int x1 : 8; unsigned int x2 : 4; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 18; unsigned short x6[8]; } amount;
@property (nonatomic, readonly, copy) NSData *currencyCode;
@property (nonatomic, readonly, copy) NSData *interfaceDeviceSerial;
@property (nonatomic, readonly, copy) NSString *kernelToken;
@property (nonatomic, readonly, copy) NSData *merchantCategoryCode;
@property (nonatomic, readonly) long long mode;
@property (nonatomic, readonly, copy) NSArray *preferredSchemes;
@property (nonatomic, readonly, copy) NSData *schemePreference;
@property (nonatomic, readonly) long long timeoutReadPay;
@property (nonatomic, readonly) long long timeoutReadVas;
@property (nonatomic, readonly, copy) NSString *transactionId;
@property (nonatomic, readonly) unsigned char transactionType;
@property (nonatomic, readonly, copy) NSArray *urls;
@property (nonatomic, readonly, copy) NSArray *vasPasses;
@property (nonatomic, readonly, copy) NSArray *vasProtocol;
@property (nonatomic, readonly, copy) NSArray *vasRequests;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct { unsigned int x1 : 8; unsigned int x2 : 4; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 18; unsigned short x6[8]; })amount;
- (id)currencyCode;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMode:(long long)arg1 vasPasses:(id)arg2 urls:(id)arg3 amount:(struct { unsigned int x1 : 8; unsigned int x2 : 4; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 18; unsigned short x6[8]; })arg4 currencyCode:(id)arg5 transactionType:(unsigned char)arg6 merchantCategoryCode:(id)arg7 interfaceDeviceSerial:(id)arg8 kernelToken:(id)arg9 timeoutReadPay:(long long)arg10 timeoutReadVas:(long long)arg11;
- (id)initWithMode:(long long)arg1 vasPasses:(id)arg2 urls:(id)arg3 amount:(struct { unsigned int x1 : 8; unsigned int x2 : 4; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 18; unsigned short x6[8]; })arg4 currencyCode:(id)arg5 transactionType:(unsigned char)arg6 merchantCategoryCode:(id)arg7 kernelToken:(id)arg8 timeoutReadPay:(long long)arg9 timeoutReadVas:(long long)arg10;
- (id)initWithMode:(long long)arg1 vasRequests:(id)arg2 amount:(struct { unsigned int x1 : 8; unsigned int x2 : 4; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 18; unsigned short x6[8]; })arg3 currencyCode:(id)arg4 transactionType:(unsigned char)arg5 merchantCategoryCode:(id)arg6 interfaceDeviceSerial:(id)arg7 kernelToken:(id)arg8 timeoutReadPay:(long long)arg9 timeoutReadVas:(long long)arg10;
- (id)initWithMode:(long long)arg1 vasRequests:(id)arg2 amount:(struct { unsigned int x1 : 8; unsigned int x2 : 4; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 18; unsigned short x6[8]; })arg3 currencyCode:(id)arg4 transactionType:(unsigned char)arg5 merchantCategoryCode:(id)arg6 interfaceDeviceSerial:(id)arg7 kernelToken:(id)arg8 timeoutReadPay:(long long)arg9 timeoutReadVas:(long long)arg10 transactionId:(id)arg11;
- (id)initWithMode:(long long)arg1 vasRequests:(id)arg2 amount:(struct { unsigned int x1 : 8; unsigned int x2 : 4; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 18; unsigned short x6[8]; })arg3 currencyCode:(id)arg4 transactionType:(unsigned char)arg5 merchantCategoryCode:(id)arg6 interfaceDeviceSerial:(id)arg7 kernelToken:(id)arg8 timeoutReadPay:(long long)arg9 timeoutReadVas:(long long)arg10 transactionId:(id)arg11 preferredSchemes:(id)arg12;
- (id)initWithMode:(long long)arg1 vasRequests:(id)arg2 amount:(struct { unsigned int x1 : 8; unsigned int x2 : 4; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 18; unsigned short x6[8]; })arg3 currencyCode:(id)arg4 transactionType:(unsigned char)arg5 merchantCategoryCode:(id)arg6 interfaceDeviceSerial:(id)arg7 kernelToken:(id)arg8 timeoutReadPay:(long long)arg9 timeoutReadVas:(long long)arg10 transactionId:(id)arg11 schemePreference:(id)arg12;
- (id)interfaceDeviceSerial;
- (id)kernelToken;
- (id)merchantCategoryCode;
- (long long)mode;
- (id)preferredSchemes;
- (id)schemePreference;
- (long long)timeoutReadPay;
- (long long)timeoutReadVas;
- (id)transactionId;
- (unsigned char)transactionType;
- (id)urls;
- (id)vasPasses;
- (id)vasProtocol;
- (id)vasRequests;

@end
