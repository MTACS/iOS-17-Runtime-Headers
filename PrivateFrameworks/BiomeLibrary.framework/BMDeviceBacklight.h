
@interface BMDeviceBacklight : BMEventBase <BMStoreData> {
    unsigned long long  _backlightLevel;
    bool  _hasBacklightLevel;
    bool  _hasRaw_absoluteTimestamp;
    double  _raw_absoluteTimestamp;
}

@property (nonatomic, readonly) NSDate *absoluteTimestamp;
@property (nonatomic, readonly) unsigned long long backlightLevel;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasBacklightLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (id)absoluteTimestamp;
- (unsigned long long)backlightLevel;
- (unsigned int)dataVersion;
- (id)description;
- (bool)hasBacklightLevel;
- (id)initByReadFrom:(id)arg1;
- (id)initWithAbsoluteTimestamp:(id)arg1 backlightLevel:(id)arg2;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (void)setHasBacklightLevel:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
