
@interface FedStatsBoundedULongType : NSObject <FedStatsDataTypeProtocol> {
    unsigned long long  _bound;
}

@property (nonatomic) unsigned long long bound;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)createFromDict:(id)arg1 possibleError:(id*)arg2;
+ (id)gFedStatsOutOfBoundsNumber;

- (unsigned long long)bound;
- (unsigned long long)classCount;
- (long long)dataType;
- (id)decodeFromIndex:(id)arg1 possibleError:(id*)arg2;
- (id)decodeFromOneHotVector:(id)arg1 possibleError:(id*)arg2;
- (id)encodeToIndex:(id)arg1 possibleError:(id*)arg2;
- (id)encodeToOneHotVector:(id)arg1 possibleError:(id*)arg2;
- (id)initWithBound:(unsigned long long)arg1;
- (id)sampleForIndex:(unsigned long long)arg1;
- (void)setBound:(unsigned long long)arg1;

@end
