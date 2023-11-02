
@interface WBSPasswordBreachCredential : NSObject {
    NSDate * _dateLastModified;
    NSString * _password;
    NSData * _persistentIdentifier;
}

@property (nonatomic, readonly) NSDate *dateLastModified;
@property (nonatomic, readonly) NSString *password;
@property (nonatomic, readonly) NSData *persistentIdentifier;

- (void).cxx_destruct;
- (id)dateLastModified;
- (id)description;
- (id)initWithPassword:(id)arg1 persistentIdentifier:(id)arg2 dateLastModified:(id)arg3;
- (id)initWithSecItemDictionary:(id)arg1;
- (id)password;
- (id)persistentIdentifier;

@end
