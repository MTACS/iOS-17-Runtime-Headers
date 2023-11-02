
@interface NTPBAVAssetKey : PBCodable <FCAVAssetKeyType, FCKeyValueStoreCoding, NSCopying> {
    NTPBDate * _createdAt;
    NTPBDate * _expiresAt;
    NSString * _identifier;
    NSData * _keyData;
}

@property (nonatomic, readonly) FCContentArchive *contentArchive;
@property (nonatomic, retain) NTPBDate *createdAt;
@property (nonatomic, readonly) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, retain) NTPBDate *expiresAt;
@property (nonatomic, readonly) bool hasCreatedAt;
@property (nonatomic, readonly) bool hasExpiresAt;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasKeyData;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, readonly) bool isExpired;
@property (nonatomic, retain) NSData *keyData;
@property (nonatomic, readonly) NSData *keyData;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createdAt;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)expiresAt;
- (bool)hasCreatedAt;
- (bool)hasExpiresAt;
- (bool)hasIdentifier;
- (bool)hasKeyData;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (id)keyData;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCreatedAt:(id)arg1;
- (void)setExpiresAt:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setKeyData:(id)arg1;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (int)keyValuePairType;
+ (id)readValueFromKeyValuePair:(id)arg1;

- (id)contentArchive;
- (id)creationDate;
- (id)expirationDate;
- (bool)isExpired;
- (void)writeToKeyValuePair:(id)arg1;

@end
