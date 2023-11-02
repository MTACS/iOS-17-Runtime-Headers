
@interface OspreyKeychain : NSObject

- (id)createKeychainQuery;
- (bool)deleteDataWithIdentifier:(id)arg1;
- (id)fetchDataWithIdentifier:(id)arg1;
- (bool)saveData:(id)arg1 withIdentifier:(id)arg2;

@end
