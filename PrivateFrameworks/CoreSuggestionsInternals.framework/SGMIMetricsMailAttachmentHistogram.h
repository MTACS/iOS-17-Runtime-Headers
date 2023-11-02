
@interface SGMIMetricsMailAttachmentHistogram : PBCodable <NSCopying> {
    int  _category;
    unsigned int  _count128KBTo512KB;
    unsigned int  _count32KBTo128KB;
    unsigned int  _count512KBTo2MB;
    unsigned int  _count8KBTo32KB;
    unsigned int  _countOver2MB;
    unsigned int  _countUpTo8KB;
    struct { 
        unsigned int category : 1; 
        unsigned int count128KBTo512KB : 1; 
        unsigned int count32KBTo128KB : 1; 
        unsigned int count512KBTo2MB : 1; 
        unsigned int count8KBTo32KB : 1; 
        unsigned int countOver2MB : 1; 
        unsigned int countUpTo8KB : 1; 
    }  _has;
}

@property (nonatomic) int category;
@property (nonatomic) unsigned int count128KBTo512KB;
@property (nonatomic) unsigned int count32KBTo128KB;
@property (nonatomic) unsigned int count512KBTo2MB;
@property (nonatomic) unsigned int count8KBTo32KB;
@property (nonatomic) unsigned int countOver2MB;
@property (nonatomic) unsigned int countUpTo8KB;
@property (nonatomic) bool hasCategory;
@property (nonatomic) bool hasCount128KBTo512KB;
@property (nonatomic) bool hasCount32KBTo128KB;
@property (nonatomic) bool hasCount512KBTo2MB;
@property (nonatomic) bool hasCount8KBTo32KB;
@property (nonatomic) bool hasCountOver2MB;
@property (nonatomic) bool hasCountUpTo8KB;

- (int)StringAsCategory:(id)arg1;
- (int)category;
- (id)categoryAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count128KBTo512KB;
- (unsigned int)count32KBTo128KB;
- (unsigned int)count512KBTo2MB;
- (unsigned int)count8KBTo32KB;
- (unsigned int)countOver2MB;
- (unsigned int)countUpTo8KB;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCategory;
- (bool)hasCount128KBTo512KB;
- (bool)hasCount32KBTo128KB;
- (bool)hasCount512KBTo2MB;
- (bool)hasCount8KBTo32KB;
- (bool)hasCountOver2MB;
- (bool)hasCountUpTo8KB;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCategory:(int)arg1;
- (void)setCount128KBTo512KB:(unsigned int)arg1;
- (void)setCount32KBTo128KB:(unsigned int)arg1;
- (void)setCount512KBTo2MB:(unsigned int)arg1;
- (void)setCount8KBTo32KB:(unsigned int)arg1;
- (void)setCountOver2MB:(unsigned int)arg1;
- (void)setCountUpTo8KB:(unsigned int)arg1;
- (void)setHasCategory:(bool)arg1;
- (void)setHasCount128KBTo512KB:(bool)arg1;
- (void)setHasCount32KBTo128KB:(bool)arg1;
- (void)setHasCount512KBTo2MB:(bool)arg1;
- (void)setHasCount8KBTo32KB:(bool)arg1;
- (void)setHasCountOver2MB:(bool)arg1;
- (void)setHasCountUpTo8KB:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
