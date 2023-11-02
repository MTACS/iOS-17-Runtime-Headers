
@interface KTOptInState : NSObject <NSSecureCoding> {
    NSString * _application;
    NSString * _osVersion;
    NSString * _serialNumber;
    NSDate * _smtTimestamp;
    unsigned long long  _state;
    NSString * _uri;
}

@property (retain) NSString *application;
@property (retain) NSString *osVersion;
@property (retain) NSString *serialNumber;
@property (retain) NSDate *smtTimestamp;
@property unsigned long long state;
@property (retain) NSString *uri;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)application;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithApplication:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURI:(id)arg1 application:(id)arg2;
- (id)jsonDescription;
- (id)osVersion;
- (id)serialNumber;
- (void)setApplication:(id)arg1;
- (void)setOsVersion:(id)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)setSmtTimestamp:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setUri:(id)arg1;
- (id)smtTimestamp;
- (unsigned long long)state;
- (id)uri;

@end
