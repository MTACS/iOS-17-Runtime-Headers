
@interface NTPBTodayModuleDescriptor : PBCodable <NSCopying> {
    NSMutableArray * _availableContents;
    struct { 
        unsigned int type : 1; 
    }  _has;
    NSString * _identifier;
    int  _type;
}

@property (nonatomic, retain) NSMutableArray *availableContents;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic) bool hasType;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) int type;

// Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport

+ (Class)availableContentsType;

- (void).cxx_destruct;
- (void)addAvailableContents:(id)arg1;
- (id)availableContents;
- (id)availableContentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)availableContentsCount;
- (void)clearAvailableContents;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIdentifier;
- (bool)hasType;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAvailableContents:(id)arg1;
- (void)setHasType:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday

+ (id)nt_defaultModule;
+ (id)nt_moduleWithTagID:(id)arg1;

@end
