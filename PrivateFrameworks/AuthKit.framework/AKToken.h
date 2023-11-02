
@interface AKToken : NSObject {
    NSDate * _expirationDate;
    NSString * _name;
    NSString * _stringValue;
}

@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *stringValue;

+ (id)tokenWithBase64String:(id)arg1;
+ (id)tokenWithDictionary:(id)arg1;
+ (id)tokenWithValue:(id)arg1 lifetime:(id)arg2;

- (void).cxx_destruct;
- (id)expirationDate;
- (id)name;
- (void)setName:(id)arg1;
- (void)setStringValue:(id)arg1;
- (id)stringValue;

@end
