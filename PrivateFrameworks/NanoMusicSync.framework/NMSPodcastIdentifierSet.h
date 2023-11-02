
@interface NMSPodcastIdentifierSet : NSObject <NSCopying> {
    NSString * _feedURL;
    NSNumber * _storeID;
}

@property (nonatomic, readonly) NSString *feedURL;
@property (nonatomic, readonly) NSNumber *storeID;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)feedURL;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithStoreID:(id)arg1 feedURL:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPodcastIdentifierSet:(id)arg1;
- (id)storeID;

@end
