
@interface FMDownloadOptions : NSObject {
    bool  _allowsCellular;
    unsigned long long  _downloadPriority;
}

@property (nonatomic) bool allowsCellular;
@property (nonatomic) unsigned long long downloadPriority;

- (void)_configureDefaults;
- (bool)allowsCellular;
- (id)description;
- (unsigned long long)downloadPriority;
- (id)init;
- (void)setAllowsCellular:(bool)arg1;
- (void)setDownloadPriority:(unsigned long long)arg1;

@end
