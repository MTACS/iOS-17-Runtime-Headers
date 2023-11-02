
@interface STSConnectionHandover : NSObject <NSSecureCoding> {
    NSMutableArray * _alternativeCarriers;
    unsigned long long  _majorVersion;
    unsigned long long  _minorVersion;
}

@property (nonatomic, readonly) NSArray *alternativeCarriers;
@property (nonatomic, readonly) unsigned long long majorVersion;
@property (nonatomic, readonly) unsigned long long minorVersion;

+ (id)_connectionHandoverWithNdefMessage:(id)arg1;
+ (id)_createNdefWithType:(long long)arg1 alternativeCarriers:(id)arg2 errorRecord:(id)arg3;
+ (id)connectionHandoverWithData:(id)arg1;
+ (id)requestWithAlternativeCarriers:(id)arg1;
+ (id)selectWithAlternativeCarriers:(id)arg1 error:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addAlternativeCarrier:(id)arg1;
- (id)alternativeCarriers;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)majorVersion;
- (unsigned long long)minorVersion;

@end
