
@interface COKeyPath : NSObject <NSCopying> {
    NSString * _absoluteString;
    NSArray * _components;
}

@property (nonatomic, copy) NSString *absoluteString;
@property (nonatomic, copy) NSArray *components;

+ (id)allowedCharacterSet;
+ (id)createWithString:(id)arg1;
+ (id)predicateWithComponents:(id)arg1;

- (void).cxx_destruct;
- (id)absoluteString;
- (id)components;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithComponents:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setAbsoluteString:(id)arg1;
- (void)setComponents:(id)arg1;

@end
