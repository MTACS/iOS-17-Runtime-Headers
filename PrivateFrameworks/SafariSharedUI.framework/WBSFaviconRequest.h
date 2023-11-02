
@interface WBSFaviconRequest : WBSSiteMetadataRequest <WBSIconRequest>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long fallbackType;
@property (readonly) unsigned long long hash;
@property (getter=isIconDownloadingEnabled, nonatomic, readonly) bool iconDownloadingEnabled;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } iconSize;
@property (nonatomic, readonly) bool isURLTypedByUser;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } sizeForDrawing;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly, copy) NSString *uniqueIdentifier;

- (id)_initWithURL:(id)arg1 type:(unsigned long long)arg2 iconSize:(struct CGSize { double x1; double x2; })arg3 fallbackType:(unsigned long long)arg4 isURLTypedByUser:(bool)arg5 iconDownloadingEnabled:(bool)arg6;
- (unsigned long long)fallbackType;
- (struct CGSize { double x1; double x2; })iconSize;
- (id)initWithDomain:(id)arg1 iconSize:(struct CGSize { double x1; double x2; })arg2 fallbackType:(unsigned long long)arg3;
- (id)initWithURL:(id)arg1 extraInfo:(id)arg2;
- (id)initWithURL:(id)arg1 iconSize:(struct CGSize { double x1; double x2; })arg2 fallbackType:(unsigned long long)arg3;
- (id)initWithURL:(id)arg1 iconSize:(struct CGSize { double x1; double x2; })arg2 fallbackType:(unsigned long long)arg3 iconDownloadingEnabled:(bool)arg4;
- (id)initWithURL:(id)arg1 iconSize:(struct CGSize { double x1; double x2; })arg2 fallbackType:(unsigned long long)arg3 isURLTypedByUser:(bool)arg4;
- (bool)isIconDownloadingEnabled;
- (bool)isURLTypedByUser;
- (struct CGSize { double x1; double x2; })sizeForDrawing;
- (unsigned long long)type;
- (id)uniqueIdentifier;

@end
