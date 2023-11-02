
@interface CNCollationSection : NSObject {
    NSString * _key;
    NSString * _localizedName;
}

@property (readonly) NSString *key;
@property (readonly) NSString *localizedName;

- (void).cxx_destruct;
- (id)initWithKey:(id)arg1 localizedName:(id)arg2;
- (id)key;
- (id)localizedName;

@end
