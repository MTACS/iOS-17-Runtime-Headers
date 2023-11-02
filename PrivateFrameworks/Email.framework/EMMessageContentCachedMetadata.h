
@interface EMMessageContentCachedMetadata : NSObject {
    <EMMessageContentCachedMetadataDelegate> * _delegate;
    bool  _didLogCachedMetadataError;
    NSMutableDictionary * _localCache;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (nonatomic) bool showRemoteImages;
@property (nonatomic) bool skipMessageReformatting;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)arg1;
- (void)setShowRemoteImages:(bool)arg1;
- (void)setSkipMessageReformatting:(bool)arg1;
- (bool)showRemoteImages;
- (bool)skipMessageReformatting;

@end
