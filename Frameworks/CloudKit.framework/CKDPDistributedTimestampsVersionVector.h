
@interface CKDPDistributedTimestampsVersionVector : PBCodable <NSCopying> {
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _clockValueLengths;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _clockValues;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _stateValueLengths;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _stateValues;
}

@property (nonatomic, readonly) unsigned long long*clockValueLengths;
@property (nonatomic, readonly) unsigned long long clockValueLengthsCount;
@property (nonatomic, readonly) unsigned long long*clockValues;
@property (nonatomic, readonly) unsigned long long clockValuesCount;
@property (nonatomic, readonly) unsigned int*stateValueLengths;
@property (nonatomic, readonly) unsigned long long stateValueLengthsCount;
@property (nonatomic, readonly) int*stateValues;
@property (nonatomic, readonly) unsigned long long stateValuesCount;

- (int)StringAsStateValues:(id)arg1;
- (void)addClockValueLengths:(unsigned long long)arg1;
- (void)addClockValues:(unsigned long long)arg1;
- (void)addStateValueLengths:(unsigned int)arg1;
- (void)addStateValues:(int)arg1;
- (void)clearClockValueLengths;
- (void)clearClockValues;
- (void)clearStateValueLengths;
- (void)clearStateValues;
- (unsigned long long*)clockValueLengths;
- (unsigned long long)clockValueLengthsAtIndex:(unsigned long long)arg1;
- (unsigned long long)clockValueLengthsCount;
- (unsigned long long*)clockValues;
- (unsigned long long)clockValuesAtIndex:(unsigned long long)arg1;
- (unsigned long long)clockValuesCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setClockValueLengths:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)setClockValues:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)setStateValueLengths:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setStateValues:(int*)arg1 count:(unsigned long long)arg2;
- (unsigned int*)stateValueLengths;
- (unsigned int)stateValueLengthsAtIndex:(unsigned long long)arg1;
- (unsigned long long)stateValueLengthsCount;
- (int*)stateValues;
- (id)stateValuesAsString:(int)arg1;
- (int)stateValuesAtIndex:(unsigned long long)arg1;
- (unsigned long long)stateValuesCount;
- (void)writeTo:(id)arg1;

@end
