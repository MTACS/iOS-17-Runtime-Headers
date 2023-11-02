
@interface NTPBAsset : PBCodable <FCKeyValueStoreCoding, NSCopying> {
    int  _error;
    struct { 
        unsigned int error : 1; 
        unsigned int size : 1; 
    }  _has;
    unsigned int  _size;
    NSData * _wrappingKeyID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int error;
@property (nonatomic) bool hasError;
@property (nonatomic) bool hasSize;
@property (nonatomic, readonly) bool hasWrappingKeyID;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned int size;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSData *wrappingKeyID;

// Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int)error;
- (bool)hasError;
- (bool)hasSize;
- (bool)hasWrappingKeyID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setError:(int)arg1;
- (void)setHasError:(bool)arg1;
- (void)setHasSize:(bool)arg1;
- (void)setSize:(unsigned int)arg1;
- (void)setWrappingKeyID:(id)arg1;
- (unsigned int)size;
- (id)wrappingKeyID;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (int)keyValuePairType;
+ (id)readValueFromKeyValuePair:(id)arg1;

- (void)writeToKeyValuePair:(id)arg1;

@end
