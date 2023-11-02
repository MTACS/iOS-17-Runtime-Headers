
@interface HDHRSSignedClinicalDataProcessingContextCollection : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _contextItems;
    NSString * _countryCode;
    unsigned long long  _options;
    NSDate * _receivedDate;
}

@property (nonatomic, readonly, copy) NSArray *contextItems;
@property (nonatomic, readonly, copy) NSString *countryCode;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly, copy) NSDate *receivedDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contextItems;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithReceivedDate:(id)arg1 countryCode:(id)arg2 options:(unsigned long long)arg3 contextItems:(id)arg4;
- (bool)isEqual:(id)arg1;
- (unsigned long long)options;
- (id)receivedDate;

@end
