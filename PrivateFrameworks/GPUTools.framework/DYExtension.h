
@interface DYExtension : NSObject {
    NSBundle * _bundle;
    NSDictionary * _dictionary;
    NSString * _identifier;
    NSString * _slot;
}

@property (nonatomic, readonly, retain) NSBundle *bundle;
@property (nonatomic, readonly, retain) NSString *identifier;
@property (nonatomic, readonly, retain) NSString *slot;

- (id)_initWithDictionary:(id)arg1 bundle:(id)arg2;
- (id)bundle;
- (void)dealloc;
- (id)description;
- (id)identifier;
- (id)init;
- (id)objectForKey:(id)arg1;
- (id)slot;

@end
