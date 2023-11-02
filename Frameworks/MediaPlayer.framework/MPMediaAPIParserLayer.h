
@interface MPMediaAPIParserLayer : NSObject {
    NSString * _key;
    unsigned long long  _type;
}

@property (nonatomic, copy) NSString *key;
@property (nonatomic) unsigned long long type;

+ (id)layerWithFirstObjectOfType:(unsigned long long)arg1;
+ (id)layerWithKey:(id)arg1 ofType:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)key;
- (void)setKey:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
