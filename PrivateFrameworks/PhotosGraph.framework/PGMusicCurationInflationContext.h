
@interface PGMusicCurationInflationContext : NSObject {
    void actionSource;
    void cache;
    void shouldForceMetadataRefetch;
}

@property (nonatomic, readonly) NSString *actionSource;

+ (id)contextWithMusicCache:(id)arg1 actionSource:(id)arg2 shouldForceMetadataRefetch:(bool)arg3;

- (void).cxx_destruct;
- (id)actionSource;
- (id)init;

@end
