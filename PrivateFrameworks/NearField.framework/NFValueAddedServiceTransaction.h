
@interface NFValueAddedServiceTransaction : NSObject <NSSecureCoding> {
    NSNumber * _didSucceed;
    NSError * _error;
    NSNumber * _filter;
    NSNumber * _filterType;
    NSData * _merchantId;
    NSData * _passData;
    unsigned int  _result;
    NSString * _signupUrl;
    NSNumber * _terminalAppVersion;
    NSNumber * _terminalMode;
    NSData * _token;
}

@property (nonatomic, readonly, retain) NSNumber *didSucceed;
@property (nonatomic, readonly, retain) NSError *error;
@property (nonatomic, readonly, retain) NSNumber *filter;
@property (nonatomic, readonly, retain) NSNumber *filterType;
@property (nonatomic, readonly, retain) NSData *merchantId;
@property (nonatomic, readonly, retain) NSData *passData;
@property (nonatomic, readonly) unsigned int result;
@property (nonatomic, readonly, retain) NSString *signupUrl;
@property (nonatomic, readonly, retain) NSNumber *terminalAppVersion;
@property (nonatomic, readonly, retain) NSNumber *terminalMode;
@property (nonatomic, readonly, retain) NSData *token;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)asDictionary;
- (id)description;
- (id)didSucceed;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)filter;
- (id)filterType;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)merchantId;
- (id)passData;
- (unsigned int)result;
- (id)signupUrl;
- (id)terminalAppVersion;
- (id)terminalMode;
- (id)token;

@end
