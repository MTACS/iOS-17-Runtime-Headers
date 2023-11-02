
@interface WBSFaviconResponse : WBSSiteMetadataResponse <WBSIconResponse> {
    UIImage * _favicon;
    unsigned long long  _faviconType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIColor *extractedBackgroundColor;
@property (nonatomic, readonly) UIImage *favicon;
@property (nonatomic, readonly) unsigned long long faviconType;
@property (getter=isGenerated, nonatomic, readonly) bool generated;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIImage *icon;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)favicon;
- (unsigned long long)faviconType;
- (id)icon;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 favicon:(id)arg2 faviconType:(unsigned long long)arg3;

@end
