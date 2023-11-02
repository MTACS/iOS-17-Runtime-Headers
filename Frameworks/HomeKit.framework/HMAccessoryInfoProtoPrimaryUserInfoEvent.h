
@interface HMAccessoryInfoProtoPrimaryUserInfoEvent : PBCodable <NSCopying> {
    struct { 
        unsigned int selectionType : 1; 
    }  _has;
    int  _selectionType;
    NSString * _uuidString;
}

@property (nonatomic) bool hasSelectionType;
@property (nonatomic, readonly) bool hasUuidString;
@property (nonatomic) int selectionType;
@property (nonatomic, retain) NSString *uuidString;

- (void).cxx_destruct;
- (int)StringAsSelectionType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSelectionType;
- (bool)hasUuidString;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)selectionType;
- (id)selectionTypeAsString:(int)arg1;
- (void)setHasSelectionType:(bool)arg1;
- (void)setSelectionType:(int)arg1;
- (void)setUuidString:(id)arg1;
- (id)uuidString;
- (void)writeTo:(id)arg1;

@end
