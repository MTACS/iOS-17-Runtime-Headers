
@interface JTLocalAssetMediaItem : JFXMediaItem {
    NSString * _localFileName;
    NSURL * _localFileURL;
}

@property (nonatomic, copy) NSString *localFileName;
@property (nonatomic, retain) NSURL *localFileURL;

- (void).cxx_destruct;
- (bool)canSaveToCameraRoll;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)info;
- (id)initWithInfo:(id)arg1 delegate:(id)arg2;
- (id)initWithURL:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localFileName;
- (id)localFileURL;
- (void)setLocalFileName:(id)arg1;
- (void)setLocalFileURL:(id)arg1;

@end
