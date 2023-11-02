
@interface STStorageSharedContainer : STStorageApp {
    STStorageApp * _appRep;
    NSArray * _owners;
    NSString * _path;
}

@property (retain) STStorageApp *appRep;
@property (retain) NSArray *owners;
@property (retain) NSString *path;

- (void).cxx_destruct;
- (id)appRep;
- (id)initWithPath:(id)arg1 owners:(id)arg2;
- (id)owners;
- (id)path;
- (void)setAppRep:(id)arg1;
- (void)setOwners:(id)arg1;
- (void)setPath:(id)arg1;

@end
