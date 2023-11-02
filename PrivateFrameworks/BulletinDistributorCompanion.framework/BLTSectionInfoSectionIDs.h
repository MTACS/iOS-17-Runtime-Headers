
@interface BLTSectionInfoSectionIDs : NSObject {
    NSString * _sectionID;
    NSString * _universalSectionID;
}

@property (nonatomic, retain) NSString *sectionID;
@property (nonatomic, retain) NSString *universalSectionID;

- (void).cxx_destruct;
- (id)sectionID;
- (void)setSectionID:(id)arg1;
- (void)setUniversalSectionID:(id)arg1;
- (id)universalSectionID;

@end
