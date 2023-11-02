
@interface _INPBDateTimeRangeList : PBCodable <NSCopying, NSSecureCoding, _INPBDateTimeRangeList> {
    _INPBCondition * _condition;
    NSArray * _dateRanges;
    struct { }  _has;
}

@property (nonatomic, retain) _INPBCondition *condition;
@property (nonatomic, copy) NSArray *dateRanges;
@property (nonatomic, readonly) unsigned long long dateRangesCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasCondition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)dateRangeType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addDateRange:(id)arg1;
- (void)clearDateRanges;
- (id)condition;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateRangeAtIndex:(unsigned long long)arg1;
- (id)dateRanges;
- (unsigned long long)dateRangesCount;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasCondition;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCondition:(id)arg1;
- (void)setDateRanges:(id)arg1;
- (void)writeTo:(id)arg1;

@end
