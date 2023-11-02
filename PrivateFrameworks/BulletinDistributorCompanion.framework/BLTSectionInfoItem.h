
@interface BLTSectionInfoItem : NSObject {
    BBSectionInfo * _sectionInfo;
}

@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, retain) BBSectionInfo *sectionInfo;

- (void).cxx_destruct;
- (id)displayName;
- (id)sectionInfo;
- (void)setSectionInfo:(id)arg1;

@end
