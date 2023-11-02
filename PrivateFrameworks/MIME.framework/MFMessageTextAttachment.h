
@interface MFMessageTextAttachment : NSObject {
    NSMutableDictionary * _cache;
}

@property (nonatomic, retain) MFMessageFileWrapper *fileWrapper;

+ (unsigned long long)precedenceLevel;

- (void).cxx_destruct;
- (unsigned int)approximateSize;
- (id)cachedValueForKey:(id)arg1;
- (id)description;
- (void)download;
- (id)fileWrapper;
- (id)fileWrapperForcingDownload:(bool)arg1;
- (bool)hasBeenDownloaded;
- (id)init;
- (id)initWithWrapper:(id)arg1;
- (void)inlineDisplayData:(id*)arg1 mimeType:(id*)arg2;
- (bool)isPlaceholder;
- (id)mimePart;
- (bool)needsRedownload;
- (void)setCachedValue:(id)arg1 forKey:(id)arg2;
- (void)setFileWrapper:(id)arg1;
- (void)setMimePart:(id)arg1;
- (bool)shouldDownloadAttachmentOnDisplay;
- (id)textEncodingGuess;
- (id)textEncodingNameForData:(id)arg1 mimeType:(id)arg2;

@end
