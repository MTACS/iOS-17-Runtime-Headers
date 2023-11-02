
@interface NTPBBloomFilterInfo : PBCodable <NSCopying> {
    NSData * _bloomFilterData;
    int  _hashFunctionCount;
}

@property (nonatomic, retain) NSData *bloomFilterData;
@property (nonatomic) int hashFunctionCount;

// Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport

- (void).cxx_destruct;
- (id)bloomFilterData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (int)hashFunctionCount;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBloomFilterData:(id)arg1;
- (void)setHashFunctionCount:(int)arg1;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (id)fc_emptyBloomFilterInfo;
+ (id)fc_fullBloomFilterInfo;

- (bool)fc_maybeContainsURL:(id)arg1;

@end
