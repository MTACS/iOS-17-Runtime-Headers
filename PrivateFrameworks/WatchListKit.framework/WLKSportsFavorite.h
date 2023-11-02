
@interface WLKSportsFavorite : NSObject <WLKSportsFavoriteRepresentable> {
    NSString * _ID;
    NSString * _abbreviation;
    NSString * _backgroundColor;
    NSDictionary * _images;
    bool  _isHome;
    NSString * _leagueId;
    NSString * _name;
    NSString * _nickName;
    NSString * _shortName;
}

@property (nonatomic, readonly, copy) NSString *ID;
@property (nonatomic, readonly, copy) NSString *abbreviation;
@property (nonatomic, readonly, copy) NSString *backgroundColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSDictionary *images;
@property (nonatomic, readonly) bool isHome;
@property (nonatomic, readonly, copy) NSString *leagueId;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *nickName;
@property (nonatomic, readonly, copy) NSString *shortName;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)ID;
- (id)abbreviation;
- (id)backgroundColor;
- (id)images;
- (id)initWithDictionary:(id)arg1;
- (id)initWithID:(id)arg1;
- (bool)isHome;
- (id)leagueId;
- (id)name;
- (id)nickName;
- (id)shortName;

@end
