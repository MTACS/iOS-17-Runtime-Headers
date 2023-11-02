
@interface _INPBSetTaskAttributeIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBSetTaskAttributeIntentResponse> {
    struct { }  _has;
    _INPBTask * _modifiedTask;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _warnings;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasModifiedTask;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBTask *modifiedTask;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int*warnings;
@property (nonatomic, readonly) unsigned long long warningsCount;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsWarnings:(id)arg1;
- (void)addWarnings:(int)arg1;
- (void)clearWarnings;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasModifiedTask;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)modifiedTask;
- (bool)readFrom:(id)arg1;
- (void)setModifiedTask:(id)arg1;
- (void)setWarnings:(int*)arg1 count:(unsigned long long)arg2;
- (int*)warnings;
- (id)warningsAsString:(int)arg1;
- (int)warningsAtIndex:(unsigned long long)arg1;
- (unsigned long long)warningsCount;
- (void)writeTo:(id)arg1;

@end
