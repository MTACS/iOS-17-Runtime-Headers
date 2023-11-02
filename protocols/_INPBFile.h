
@protocol _INPBFile <NSObject>

@required

- (NSData *)bookmarkData;
- (NSData *)data;
- (_INPBURLValue *)fileURL;
- (NSString *)filename;
- (bool)hasBookmarkData;
- (bool)hasData;
- (bool)hasFileURL;
- (bool)hasFilename;
- (bool)hasRemovedOnCompletion;
- (bool)hasTypeIdentifier;
- (bool)removedOnCompletion;
- (void)setBookmarkData:(NSData *)arg1;
- (void)setData:(NSData *)arg1;
- (void)setFileURL:(_INPBURLValue *)arg1;
- (void)setFilename:(NSString *)arg1;
- (void)setHasRemovedOnCompletion:(bool)arg1;
- (void)setRemovedOnCompletion:(bool)arg1;
- (void)setTypeIdentifier:(NSString *)arg1;
- (NSString *)typeIdentifier;

@end
