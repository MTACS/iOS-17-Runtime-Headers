
@interface WLKGenre : NSObject {
    NSString * _name;
    NSString * _uniqueID;
}

@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *uniqueID;

+ (id)genresWithDictionaries:(id)arg1;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)uniqueID;

@end
