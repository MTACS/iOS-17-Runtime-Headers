
@interface NTPBAVAsset : PBCodable <FCKeyValueStoreCoding, NSCopying> {
    NSData * _bookmark;
    NSMutableArray * _contentKeyIdentifiers;
    struct { 
        unsigned int size : 1; 
    }  _has;
    NSString * _identifier;
    NSString * _remoteURL;
    unsigned long long  _size;
}

@property (nonatomic, retain) NSData *bookmark;
@property (nonatomic, retain) NSMutableArray *contentKeyIdentifiers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasBookmark;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasRemoteURL;
@property (nonatomic) bool hasSize;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *remoteURL;
@property (nonatomic) unsigned long long size;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport

+ (Class)contentKeyIdentifiersType;

- (void)addContentKeyIdentifiers:(id)arg1;
- (id)bookmark;
- (void)clearContentKeyIdentifiers;
- (id)contentKeyIdentifiers;
- (id)contentKeyIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)contentKeyIdentifiersCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBookmark;
- (bool)hasIdentifier;
- (bool)hasRemoteURL;
- (bool)hasSize;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)remoteURL;
- (void)setBookmark:(id)arg1;
- (void)setContentKeyIdentifiers:(id)arg1;
- (void)setHasSize:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setRemoteURL:(id)arg1;
- (void)setSize:(unsigned long long)arg1;
- (unsigned long long)size;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (int)keyValuePairType;
+ (id)readValueFromKeyValuePair:(id)arg1;

- (void)writeToKeyValuePair:(id)arg1;

@end
