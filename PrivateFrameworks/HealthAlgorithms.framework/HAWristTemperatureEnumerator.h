
@interface HAWristTemperatureEnumerator : NSEnumerator {
    NSData * _data;
    unsigned long long  _enumerationIndex;
    unsigned long long  _numWristTemperatures;
    NSDate * _sessionStartDate;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic) unsigned long long enumerationIndex;
@property (nonatomic, readonly) unsigned long long numWristTemperatures;
@property (nonatomic, readonly) NSDate *sessionStartDate;

- (void).cxx_destruct;
- (id)allObjects;
- (id)convertPackedTemperatureSubsample;
- (id)data;
- (unsigned long long)enumerationIndex;
- (id)initWithData:(id)arg1 withSessionStartDate:(id)arg2 numWristTemperatures:(unsigned long long)arg3;
- (id)nextObject;
- (unsigned long long)numWristTemperatures;
- (id)sessionStartDate;
- (void)setEnumerationIndex:(unsigned long long)arg1;

@end
