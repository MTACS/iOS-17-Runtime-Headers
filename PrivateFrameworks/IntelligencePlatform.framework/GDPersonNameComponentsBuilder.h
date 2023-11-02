
@interface GDPersonNameComponentsBuilder : NSObject {
    NSMutableArray * _familyNames;
    NSMutableArray * _givenNames;
    NSMutableArray * _middleNames;
    NSMutableArray * _nicknames;
    NSMutableArray * _prefixes;
    NSMutableArray * _suffixes;
}

@property (nonatomic, retain) NSMutableArray *familyNames;
@property (nonatomic, retain) NSMutableArray *givenNames;
@property (nonatomic, retain) NSMutableArray *middleNames;
@property (nonatomic, retain) NSMutableArray *nicknames;
@property (nonatomic, retain) NSMutableArray *prefixes;
@property (nonatomic, retain) NSMutableArray *suffixes;

- (void).cxx_destruct;
- (id)familyNames;
- (id)givenNames;
- (id)init;
- (id)middleNames;
- (id)nicknames;
- (id)prefixes;
- (void)setFamilyNames:(id)arg1;
- (void)setGivenNames:(id)arg1;
- (void)setMiddleNames:(id)arg1;
- (void)setNicknames:(id)arg1;
- (void)setPrefixes:(id)arg1;
- (void)setSuffixes:(id)arg1;
- (id)suffixes;

@end
