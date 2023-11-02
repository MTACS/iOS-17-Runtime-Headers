
@interface SHDataFetcherFileInfo : NSObject {
    NSDate * _creationDate;
    NSData * _data;
    NSURL * _dataFilePathURL;
    NSString * _mimeType;
    NSString * _storefront;
    NSString * _suggestedFileName;
    NSString * _uniqueHash;
}

@property (nonatomic, readonly) int compressionType;
@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSURL *dataFilePathURL;
@property (nonatomic, copy) NSString *mimeType;
@property (nonatomic, copy) NSString *storefront;
@property (nonatomic, readonly, copy) NSString *suggestedExtension;
@property (nonatomic, readonly, copy) NSString *suggestedFileName;
@property (nonatomic, copy) NSString *uniqueHash;

+ (id)dataFetcherForSourceURL:(id)arg1;

- (void).cxx_destruct;
- (int)compressionType;
- (id)creationDate;
- (id)data;
- (id)dataFilePathURL;
- (id)initWithData:(id)arg1 suggestedFileName:(id)arg2;
- (id)initWithDataURL:(id)arg1;
- (id)initWithDataURL:(id)arg1 suggestedFileName:(id)arg2;
- (id)mimeType;
- (void)setCreationDate:(id)arg1;
- (void)setMimeType:(id)arg1;
- (void)setStorefront:(id)arg1;
- (void)setUniqueHash:(id)arg1;
- (id)storefront;
- (id)suggestedExtension;
- (id)suggestedFileName;
- (id)uniqueHash;

@end
