
@interface CKVAuxiliaryFilesystemBase : CKVFilesystemBase {
    bool  _isSaved;
    NSString * _name;
}

+ (id)_savedBaseDirectoryURLWithName:(id)arg1;
+ (bool)savedBaseExistsWithName:(id)arg1;
+ (id)savedBaseWithName:(id)arg1;
+ (id)temporaryBaseWithName:(id)arg1;

- (void).cxx_destruct;
- (id)initWithName:(id)arg1 isSaved:(bool)arg2;
- (void)remove;
- (id)save;

@end
