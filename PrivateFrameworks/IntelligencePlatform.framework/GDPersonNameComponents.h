
@interface GDPersonNameComponents : NSObject {
    NSArray * _familyNames;
    NSArray * _givenNames;
    NSArray * _middleNames;
    NSArray * _nicknames;
    NSArray * _prefixes;
    NSArray * _suffixes;
}

@property (nonatomic, readonly) NSArray *familyNames;
@property (nonatomic, readonly) NSArray *givenNames;
@property (nonatomic, readonly) NSArray *middleNames;
@property (nonatomic, readonly) NSArray *nicknames;
@property (nonatomic, readonly) NSArray *prefixes;
@property (nonatomic, readonly) NSArray *suffixes;

- (void).cxx_destruct;
- (id)description;
- (id)familyNames;
- (id)givenNames;
- (id)initWithNameComponentsBuilder:(id)arg1;
- (id)middleNames;
- (id)nicknames;
- (id)prefixes;
- (id)suffixes;

@end
