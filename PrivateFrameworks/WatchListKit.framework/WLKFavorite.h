
@interface WLKFavorite : NSObject {
    NSString * _ID;
    NSString * _leagueID;
    NSString * _name;
}

@property (nonatomic, readonly) NSString *ID;
@property (nonatomic, readonly) NSString *id;
@property (nonatomic, readonly) NSString *leagueID;
@property (nonatomic, readonly) NSString *name;

- (void).cxx_destruct;
- (id)ID;
- (id)description;
- (id)id;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithID:(id)arg1 name:(id)arg2 leagueID:(id)arg3;
- (id)leagueID;
- (id)name;

@end
