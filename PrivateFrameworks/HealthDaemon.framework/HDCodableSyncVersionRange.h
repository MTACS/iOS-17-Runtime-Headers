
@interface HDCodableSyncVersionRange : PBCodable <NSCopying> {
    int  _current;
    struct { 
        unsigned int current : 1; 
        unsigned int minimum : 1; 
    }  _has;
    int  _minimum;
}

@property (nonatomic) int current;
@property (nonatomic) bool hasCurrent;
@property (nonatomic) bool hasMinimum;
@property (nonatomic) int minimum;

+ (id)versionRangeWithSyncVersionRange:(struct { int x1; int x2; })arg1;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)current;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCurrent;
- (bool)hasMinimum;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)minimum;
- (bool)readFrom:(id)arg1;
- (void)setCurrent:(int)arg1;
- (void)setHasCurrent:(bool)arg1;
- (void)setHasMinimum:(bool)arg1;
- (void)setMinimum:(int)arg1;
- (struct { int x1; int x2; })syncVersionRange;
- (void)writeTo:(id)arg1;

@end
