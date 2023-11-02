
@interface AVContentKeySpecifier : NSObject {
    id  _identifier;
    NSData * _initializationData;
    NSString * _keySystem;
    NSDictionary * _options;
}

@property (readonly) id identifier;
@property (readonly) NSData *initializationData;
@property (readonly) NSString *keySystem;
@property (readonly) NSDictionary *options;

+ (id)contentKeySpecifierForKeySystem:(id)arg1 identifier:(id)arg2 options:(id)arg3;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)identifier;
- (id)initForKeySystem:(id)arg1 identifier:(id)arg2 initializationData:(id)arg3 options:(id)arg4;
- (id)initForKeySystem:(id)arg1 identifier:(id)arg2 options:(id)arg3;
- (id)initForKeySystem:(id)arg1 initializationData:(id)arg2;
- (id)initializationData;
- (id)keySystem;
- (id)options;

@end
