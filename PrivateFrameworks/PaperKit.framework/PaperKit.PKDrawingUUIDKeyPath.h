
@interface PaperKit.PKDrawingUUIDKeyPath : NSObject <NSCopying, PKDrawingUUID> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  keypath;
}

@property (nonatomic, readonly) NSData *AES128Key;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *uniqueCacheFilePath;

- (void).cxx_destruct;
- (id)AES128Key;
- (id)copyWithZone:(void*)arg1;
- (id)description;
- (long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)uniqueCacheFilePath;

@end
