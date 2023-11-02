
@interface HKCodableQuantitySeriesEnumerationResult : PBCodable <NSCopying> {
    long long  _count;
    long long  _dataTypeCode;
    double  _endTime;
    struct { 
        unsigned int count : 1; 
        unsigned int dataTypeCode : 1; 
        unsigned int endTime : 1; 
        unsigned int persistentID : 1; 
        unsigned int seriesIndex : 1; 
        unsigned int sourceID : 1; 
        unsigned int startTime : 1; 
        unsigned int value : 1; 
    }  _has;
    long long  _persistentID;
    NSData * _quantitySample;
    long long  _seriesIndex;
    long long  _sourceID;
    double  _startTime;
    NSData * _uuid;
    double  _value;
}

@property (nonatomic) long long count;
@property (nonatomic) long long dataTypeCode;
@property (nonatomic) double endTime;
@property (nonatomic) bool hasCount;
@property (nonatomic) bool hasDataTypeCode;
@property (nonatomic) bool hasEndTime;
@property (nonatomic) bool hasPersistentID;
@property (nonatomic, readonly) bool hasQuantitySample;
@property (nonatomic) bool hasSeriesIndex;
@property (nonatomic) bool hasSourceID;
@property (nonatomic) bool hasStartTime;
@property (nonatomic, readonly) bool hasUuid;
@property (nonatomic) bool hasValue;
@property (nonatomic) long long persistentID;
@property (nonatomic, retain) NSData *quantitySample;
@property (nonatomic) long long seriesIndex;
@property (nonatomic) long long sourceID;
@property (nonatomic) double startTime;
@property (nonatomic, retain) NSData *uuid;
@property (nonatomic) double value;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)count;
- (long long)dataTypeCode;
- (id)description;
- (id)dictionaryRepresentation;
- (double)endTime;
- (bool)hasCount;
- (bool)hasDataTypeCode;
- (bool)hasEndTime;
- (bool)hasPersistentID;
- (bool)hasQuantitySample;
- (bool)hasSeriesIndex;
- (bool)hasSourceID;
- (bool)hasStartTime;
- (bool)hasUuid;
- (bool)hasValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (long long)persistentID;
- (id)quantitySample;
- (bool)readFrom:(id)arg1;
- (long long)seriesIndex;
- (void)setCount:(long long)arg1;
- (void)setDataTypeCode:(long long)arg1;
- (void)setEndTime:(double)arg1;
- (void)setHasCount:(bool)arg1;
- (void)setHasDataTypeCode:(bool)arg1;
- (void)setHasEndTime:(bool)arg1;
- (void)setHasPersistentID:(bool)arg1;
- (void)setHasSeriesIndex:(bool)arg1;
- (void)setHasSourceID:(bool)arg1;
- (void)setHasStartTime:(bool)arg1;
- (void)setHasValue:(bool)arg1;
- (void)setPersistentID:(long long)arg1;
- (void)setQuantitySample:(id)arg1;
- (void)setSeriesIndex:(long long)arg1;
- (void)setSourceID:(long long)arg1;
- (void)setStartTime:(double)arg1;
- (void)setUuid:(id)arg1;
- (void)setValue:(double)arg1;
- (long long)sourceID;
- (double)startTime;
- (id)uuid;
- (double)value;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)resultWithID:(long long)arg1 UUID:(id)arg2 value:(double)arg3 count:(long long)arg4 startTime:(double)arg5 endTime:(double)arg6 seriesIndex:(long long)arg7;

@end
