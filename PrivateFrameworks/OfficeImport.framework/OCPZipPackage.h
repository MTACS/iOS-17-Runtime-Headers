
@interface OCPZipPackage : OCPPackage {
    OISFUZipArchive * mArchive;
    NSMutableDictionary * mParts;
}

- (void).cxx_destruct;
- (id)initWithArchive:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithPath:(id)arg1;
- (id)partForLocation:(id)arg1;
- (void)resetPartForLocation:(id)arg1;

@end
