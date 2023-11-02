
@interface PBUIPathProvider : NSObject <BSPathProviding> {
    NSURL * _cachesPath;
    NSURL * _defaultPath;
    NSURL * _libraryPath;
}

@property (nonatomic, retain) NSURL *cachesPath;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSURL *defaultPath;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSURL *libraryPath;
@property (readonly) Class superclass;

+ (id)providerFromProvider:(id)arg1;

- (void).cxx_destruct;
- (id)cachesPath;
- (id)defaultPath;
- (id)initFromProvider:(id)arg1;
- (id)libraryPath;
- (void)setCachesPath:(id)arg1;
- (void)setDefaultPath:(id)arg1;
- (void)setLibraryPath:(id)arg1;

@end
