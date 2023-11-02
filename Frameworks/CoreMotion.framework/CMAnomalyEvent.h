
@interface CMAnomalyEvent : NSObject <NSCopying, NSSecureCoding> {
    double  _absoluteTimestamp;
    bool  _acknowledgement;
    unsigned long long  _identifier;
    long long  _operatingMode;
    long long  _resolution;
    long long  _response;
    long long  _sosState;
    long long  _state;
    double  _updateTimestamp;
}

@property (nonatomic) double absoluteTimestamp;
@property (getter=isAcknowledgement, nonatomic) bool acknowledgement;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) unsigned long long identifier;
@property (nonatomic) long long operatingMode;
@property (nonatomic) long long resolution;
@property (nonatomic) long long response;
@property (nonatomic) long long sosState;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) NSDate *timestamp;
@property (nonatomic, readonly) NSDate *updateDate;
@property (nonatomic) double updateTimestamp;

+ (bool)supportsSecureCoding;

- (double)absoluteTimestamp;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(unsigned long long)arg1 absoluteTimestamp:(double)arg2 updateTimestamp:(double)arg3 state:(long long)arg4 response:(long long)arg5 resolution:(long long)arg6 sosState:(long long)arg7 operatingMode:(long long)arg8;
- (id)initWithIdentifier:(unsigned long long)arg1 absoluteTimestamp:(double)arg2 updateTimestamp:(double)arg3 state:(long long)arg4 response:(long long)arg5 resolution:(long long)arg6 sosState:(long long)arg7 operatingMode:(long long)arg8 acknowledgement:(bool)arg9;
- (bool)isAcknowledgement;
- (long long)operatingMode;
- (long long)resolution;
- (long long)response;
- (void)setAbsoluteTimestamp:(double)arg1;
- (void)setAcknowledgement:(bool)arg1;
- (void)setOperatingMode:(long long)arg1;
- (void)setResolution:(long long)arg1;
- (void)setResponse:(long long)arg1;
- (void)setSosState:(long long)arg1;
- (void)setUpdateTimestamp:(double)arg1;
- (long long)sosState;
- (long long)state;
- (id)timestamp;
- (id)updateDate;
- (double)updateTimestamp;

@end
