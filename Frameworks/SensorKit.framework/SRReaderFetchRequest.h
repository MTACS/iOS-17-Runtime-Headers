
@interface SRReaderFetchRequest : NSObject <SRRequestFetching> {
    bool  _bypassHoldingPeriod;
    double  _from;
    <SRRequestReading> * _readerRequest;
    double  _to;
}

@property (nonatomic, retain) NSString *bundleIdentifier;
@property bool bypassHoldingPeriod;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *deviceIdentifier;
@property double from;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *sensor;
@property (readonly) Class superclass;
@property double to;

+ (bool)supportsSecureCoding;

- (id)bundleIdentifier;
- (bool)bypassHoldingPeriod;
- (void)dealloc;
- (id)description;
- (id)deviceIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (double)from;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)sensor;
- (void)setBundleIdentifier:(id)arg1;
- (void)setBypassHoldingPeriod:(bool)arg1;
- (void)setDeviceIdentifier:(id)arg1;
- (void)setFrom:(double)arg1;
- (void)setSensor:(id)arg1;
- (void)setTo:(double)arg1;
- (double)to;

@end
