
@interface LPFetcherImageResponse : LPFetcherResponse <LPFetcherURLResponse> {
    LPImage * _image;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) LPImage *image;
@property (readonly) Class superclass;

+ (id)imagePropertiesForFetcher:(id)arg1;
+ (bool)isValidMIMEType:(id)arg1;
+ (id)responseForFetcher:(id)arg1 withData:(id)arg2 MIMEType:(id)arg3;

- (void).cxx_destruct;
- (id)image;
- (id)initWithImage:(id)arg1 fetcher:(id)arg2;

@end
