
@interface AVTPuppetStore : NSObject {
    NSArray * _puppetRecords;
}

@property (nonatomic, copy) NSArray *puppetRecords;

+ (id)createPuppetRecords;

- (void).cxx_destruct;
- (id)allAvatarPuppetsExcluding:(id)arg1 error:(id*)arg2;
- (id)allAvatarPuppetsWithError:(id*)arg1;
- (id)allPuppetRecords;
- (id)avatarPuppetsForFetchRequest:(id)arg1 error:(id*)arg2;
- (id)avatarsWithIdentifiers:(id)arg1 error:(id*)arg2;
- (id)initWithEnvironment:(id)arg1;
- (void)loadPuppetRecordsIfNeeded;
- (id)puppetRecords;
- (void)setPuppetRecords:(id)arg1;

@end
