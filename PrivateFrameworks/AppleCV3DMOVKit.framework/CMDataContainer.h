
@interface CMDataContainer : NSObject <NSSecureCoding> {
    NSMutableArray * _cmDataRecv;
    NSMutableArray * _cmDataSent;
    NSMutableArray * _cmEvents;
    NSMutableArray * _cmMsgRecv;
    NSMutableArray * _cmMsgSent;
    NSString * _cv3dVersion;
    NSString * _cvPlayerVersion;
    NSString * _deviceString;
    NSString * _iOSVersion;
    NSString * _macOSVersion;
    NSNumber * _sessionID;
    NSString * _version;
    unsigned long long  nextDataRecv;
    unsigned long long  nextDataSent;
    unsigned long long  nextEvent;
    unsigned long long  nextMsgRecv;
    unsigned long long  nextMsgSent;
}

@property (nonatomic, retain) NSMutableArray *cmDataRecv;
@property (nonatomic, retain) NSMutableArray *cmDataSent;
@property (nonatomic, retain) NSMutableArray *cmEvents;
@property (nonatomic, retain) NSMutableArray *cmMsgRecv;
@property (nonatomic, retain) NSMutableArray *cmMsgSent;
@property (nonatomic, retain) NSString *cv3dVersion;
@property (nonatomic, retain) NSString *cvPlayerVersion;
@property (nonatomic, retain) NSString *deviceString;
@property (nonatomic, retain) NSString *iOSVersion;
@property (nonatomic, retain) NSString *macOSVersion;
@property (nonatomic, retain) NSNumber *sessionID;
@property (nonatomic, retain) NSString *version;

+ (id)classes;
+ (bool)supportsSecureCoding;
+ (id)versionS;

- (void).cxx_destruct;
- (void)appendCMData:(id)arg1 sending:(bool)arg2;
- (void)appendCMEvent:(id)arg1;
- (void)appendCMMessage:(id)arg1 sending:(bool)arg2;
- (id)cmDataRecv;
- (id)cmDataSent;
- (id)cmEvents;
- (id)cmMsgRecv;
- (id)cmMsgSent;
- (id)cv3dVersion;
- (id)cvPlayerVersion;
- (id)deviceString;
- (void)encodeWithCoder:(id)arg1;
- (id)grabNextDataRecv;
- (id)grabNextDataSent;
- (id)grabNextEvent;
- (id)grabNextMessageRecv;
- (id)grabNextMessageSent;
- (id)iOSVersion;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)macOSVersion;
- (void)resetReader;
- (id)sessionID;
- (void)setCmDataRecv:(id)arg1;
- (void)setCmDataSent:(id)arg1;
- (void)setCmEvents:(id)arg1;
- (void)setCmMsgRecv:(id)arg1;
- (void)setCmMsgSent:(id)arg1;
- (void)setCv3dVersion:(id)arg1;
- (void)setCvPlayerVersion:(id)arg1;
- (void)setDeviceString:(id)arg1;
- (void)setIOSVersion:(id)arg1;
- (void)setMacOSVersion:(id)arg1;
- (void)setSessionID:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)version;

@end
