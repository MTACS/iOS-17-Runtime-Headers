
@interface CTPlanSetupDetails : NSObject <NSSecureCoding> {
    NSString * _carrierName;
    unsigned long long  _duration;
    bool  _inBuddy;
    unsigned long long  _setupResult;
    unsigned long long  _setupType;
}

@property (retain) NSString *carrierName;
@property unsigned long long duration;
@property bool inBuddy;
@property unsigned long long setupResult;
@property unsigned long long setupType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)carrierName;
- (id)description;
- (unsigned long long)duration;
- (void)encodeWithCoder:(id)arg1;
- (bool)inBuddy;
- (id)initWithCoder:(id)arg1;
- (id)initWithInBuddy:(bool)arg1 carrierName:(id)arg2 setupType:(unsigned long long)arg3 setupResult:(unsigned long long)arg4 duration:(unsigned long long)arg5;
- (bool)isEqual:(id)arg1;
- (void)setCarrierName:(id)arg1;
- (void)setDuration:(unsigned long long)arg1;
- (void)setInBuddy:(bool)arg1;
- (void)setSetupResult:(unsigned long long)arg1;
- (void)setSetupType:(unsigned long long)arg1;
- (unsigned long long)setupResult;
- (unsigned long long)setupType;

@end
