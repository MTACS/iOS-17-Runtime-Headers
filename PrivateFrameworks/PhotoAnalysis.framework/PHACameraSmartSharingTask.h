
@interface PHACameraSmartSharingTask : NSObject <PHATask> {
    PHLibraryScope * _libraryScope;
    NSString * _libraryScopeLocalIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool didProduceContent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double incrementalWindow;
@property (nonatomic, retain) PHLibraryScope *libraryScope;
@property (nonatomic, retain) NSString *libraryScopeLocalIdentifier;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) double period;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long version;

- (void).cxx_destruct;
- (id)_libraryScopeToUseWithGraphManager:(id)arg1 error:(id*)arg2;
- (bool)currentPlatformIsSupported;
- (id)incrementalKey;
- (id)libraryScope;
- (id)libraryScopeLocalIdentifier;
- (id)name;
- (double)period;
- (int)priority;
- (bool)runWithGraphManager:(id)arg1 progressReporter:(id)arg2 error:(id*)arg3;
- (void)setLibraryScope:(id)arg1;
- (void)setLibraryScopeLocalIdentifier:(id)arg1;
- (bool)shouldRunWithGraphManager:(id)arg1;
- (id)taskClassDependencies;
- (void)timeoutFatal:(bool)arg1;

@end
