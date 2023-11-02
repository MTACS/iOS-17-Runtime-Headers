
@interface HKMobileCountryCode : NSObject <HKCurrentCountryCode> {
    NSString * _ISOCode;
    NSString * _code;
    bool  _overridden;
    NSDate * _timestamp;
}

@property (nonatomic, readonly, copy) NSString *ISOCode;
@property (nonatomic, readonly, copy) NSString *code;
@property (getter=isOverridden, nonatomic, readonly) bool overridden;
@property (nonatomic, readonly) long long provenance;
@property (nonatomic, readonly, copy) NSDate *timestamp;

- (void).cxx_destruct;
- (id)ISOCode;
- (id)code;
- (id)countryCode;
- (id)description;
- (id)initWithMobileCountryCode:(id)arg1 ISOCode:(id)arg2 isOverridden:(bool)arg3;
- (bool)isOverridden;
- (long long)provenance;
- (id)timestamp;

@end
