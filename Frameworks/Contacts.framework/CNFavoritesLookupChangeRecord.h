
@interface CNFavoritesLookupChangeRecord : NSObject {
    NSString * _abDatabaseUUID;
    int  _identifier;
    NSString * _label;
    NSString * _name;
    int  _uid;
    NSString * _value;
}

@property (retain) NSString *abDatabaseUUID;
@property int identifier;
@property (retain) NSString *label;
@property (retain) NSString *name;
@property int uid;
@property (retain) NSString *value;

- (void).cxx_destruct;
- (id)abDatabaseUUID;
- (int)identifier;
- (id)label;
- (id)name;
- (void)setAbDatabaseUUID:(id)arg1;
- (void)setIdentifier:(int)arg1;
- (void)setLabel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setUid:(int)arg1;
- (void)setValue:(id)arg1;
- (int)uid;
- (id)value;

@end
