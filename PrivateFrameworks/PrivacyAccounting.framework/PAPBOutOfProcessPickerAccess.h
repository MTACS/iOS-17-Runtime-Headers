
@interface PAPBOutOfProcessPickerAccess : PBCodable <NSCopying> {
    PAPBAccess * _access;
    struct { 
        unsigned int pickerType : 1; 
    }  _has;
    int  _pickerType;
}

@property (nonatomic, retain) PAPBAccess *access;
@property (nonatomic, readonly) bool hasAccess;
@property (nonatomic) bool hasPickerType;
@property (nonatomic) int pickerType;

- (void).cxx_destruct;
- (id)access;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAccess;
- (bool)hasPickerType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)pickerType;
- (bool)readFrom:(id)arg1;
- (void)setAccess:(id)arg1;
- (void)setHasPickerType:(bool)arg1;
- (void)setPickerType:(int)arg1;
- (void)writeTo:(id)arg1;

@end
