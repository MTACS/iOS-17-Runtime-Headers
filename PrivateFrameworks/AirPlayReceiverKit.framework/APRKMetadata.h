
@interface APRKMetadata : NSObject {
    NSString * _album;
    NSString * _artist;
    NSString * _artworkDataInBase64;
    NSString * _artworkMIMEType;
    NSString * _title;
    long long  _totalTrackCount;
    long long  _trackNumber;
}

@property (nonatomic, readonly, copy) NSString *album;
@property (nonatomic, readonly, copy) NSString *artist;
@property (nonatomic, readonly, copy) NSString *artworkDataInBase64;
@property (nonatomic, readonly, copy) NSString *artworkMIMEType;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly) long long totalTrackCount;
@property (nonatomic, readonly) long long trackNumber;

- (void).cxx_destruct;
- (id)album;
- (id)artist;
- (id)artworkDataInBase64;
- (id)artworkMIMEType;
- (id)debugDescription;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)title;
- (long long)totalTrackCount;
- (long long)trackNumber;
- (void)updateMedatataWithDictionary:(id)arg1;

@end
