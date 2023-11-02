
@interface _REAppKey : NSObject <NSCopying> {
    NSString * _identifier;
    bool  _remote;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool remote;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 remote:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (bool)remote;

@end
