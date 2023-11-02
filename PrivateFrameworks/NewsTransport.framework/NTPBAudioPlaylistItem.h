
@interface NTPBAudioPlaylistItem : PBCodable <FCKeyValueStoreCoding, FCReorderableTagSubscription, NSCopying> {
    NSString * _articleID;
    NTPBDate * _dateAdded;
    struct { 
        unsigned int listOrder : 1; 
    }  _has;
    NSString * _identifier;
    long long  _listOrder;
}

@property (nonatomic, retain) NSString *articleID;
@property (nonatomic, retain) NTPBDate *dateAdded;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasArticleID;
@property (nonatomic, readonly) bool hasDateAdded;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic) bool hasListOrder;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) long long listOrder;
@property (nonatomic, readonly, copy) NSNumber *order;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *tagID;

// Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport

- (id)articleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateAdded;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasArticleID;
- (bool)hasDateAdded;
- (bool)hasIdentifier;
- (bool)hasListOrder;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (long long)listOrder;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setArticleID:(id)arg1;
- (void)setDateAdded:(id)arg1;
- (void)setHasListOrder:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setListOrder:(long long)arg1;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (id)articleIDFromIdentifier:(id)arg1;
+ (id)identifierFromArticleID:(id)arg1;
+ (int)keyValuePairType;
+ (id)readValueFromKeyValuePair:(id)arg1;

- (id)asCKRecord;
- (id)copyWithOrder:(id)arg1;
- (id)initWithCKRecord:(id)arg1;
- (id)order;
- (id)tagID;
- (void)writeToKeyValuePair:(id)arg1;

@end
