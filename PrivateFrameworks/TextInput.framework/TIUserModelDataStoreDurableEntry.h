
@interface TIUserModelDataStoreDurableEntry : NSObject {
    NSDate * _creationDate;
    NSString * _key;
    NSDate * _lastUpdateDate;
    NSNumber * _value;
}

@property (readonly) NSDate *creationDate;
@property (readonly) NSString *key;
@property (readonly) NSDate *lastUpdateDate;
@property (readonly) NSNumber *value;

- (void).cxx_destruct;
- (id)creationDate;
- (id)initWithCreationDate:(id)arg1 withLastUpdateDate:(id)arg2 withKey:(id)arg3 withValue:(id)arg4;
- (id)key;
- (id)lastUpdateDate;
- (id)value;

@end
