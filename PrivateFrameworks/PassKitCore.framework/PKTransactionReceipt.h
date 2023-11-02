
@interface PKTransactionReceipt : NSObject <NSCopying, NSSecureCoding> {
    NSString * _currencyCode;
    NSURL * _fileURL;
    NSArray * _headerFields;
    NSData * _htmlReceiptData;
    NSDate * _lastUpdatedDate;
    NSArray * _lineItems;
    NSData * _pdfReceiptData;
    NSString * _receiptIdentifier;
    NSString * _receiptProviderIdentifier;
    long long  _state;
    NSDecimalNumber * _subtotalAmount;
    NSArray * _summaryItems;
    NSURL * _supportURL;
    NSDecimalNumber * _totalAmount;
    NSString * _uniqueID;
}

@property (nonatomic, copy) NSString *currencyCode;
@property (nonatomic, readonly) NSURL *fileURL;
@property (nonatomic, readonly) NSArray *headerFields;
@property (nonatomic, readonly) NSData *htmlReceiptData;
@property (nonatomic, retain) NSDate *lastUpdatedDate;
@property (nonatomic, readonly) NSArray *lineItems;
@property (nonatomic, readonly) NSData *pdfReceiptData;
@property (nonatomic, copy) NSString *receiptIdentifier;
@property (nonatomic, copy) NSString *receiptProviderIdentifier;
@property (nonatomic) long long state;
@property (nonatomic, retain) NSDecimalNumber *subtotalAmount;
@property (nonatomic, readonly) PKCurrencyAmount *subtotalCurrencyAmount;
@property (nonatomic, readonly) NSArray *summaryItems;
@property (nonatomic, retain) NSURL *supportURL;
@property (nonatomic, retain) NSDecimalNumber *totalAmount;
@property (nonatomic, readonly) PKCurrencyAmount *totalCurrencyAmount;
@property (nonatomic, copy) NSString *uniqueID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currencyCode;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fileURL;
- (unsigned long long)hash;
- (id)headerFields;
- (id)htmlReceiptData;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileURL:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTransactionReceipt:(id)arg1;
- (id)lastUpdatedDate;
- (id)lineItems;
- (id)pdfReceiptData;
- (id)receiptIdentifier;
- (id)receiptProviderIdentifier;
- (void)setCurrencyCode:(id)arg1;
- (void)setLastUpdatedDate:(id)arg1;
- (void)setReceiptIdentifier:(id)arg1;
- (void)setReceiptProviderIdentifier:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setSubtotalAmount:(id)arg1;
- (void)setSupportURL:(id)arg1;
- (void)setTotalAmount:(id)arg1;
- (void)setUniqueID:(id)arg1;
- (long long)state;
- (id)subtotalAmount;
- (id)subtotalCurrencyAmount;
- (id)summaryItems;
- (id)supportURL;
- (id)totalAmount;
- (id)totalCurrencyAmount;
- (id)uniqueID;
- (void)updateWithBundle:(id)arg1;

@end
