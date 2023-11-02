
@interface GKRequestIdentifier : NSObject <NSCopying> {
    NSArray * _arguments;
    unsigned long long  _savedHash;
    SEL  _selector;
}

@property (nonatomic, retain) NSArray *arguments;
@property (nonatomic) unsigned long long savedHash;
@property (nonatomic) SEL selector;

+ (id)requestIdentifierForInvocation:(id)arg1;

- (void).cxx_destruct;
- (id)_argumentsForInvocation:(id)arg1;
- (id)arguments;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithInvocation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)savedHash;
- (SEL)selector;
- (void)setArguments:(id)arg1;
- (void)setSavedHash:(unsigned long long)arg1;
- (void)setSelector:(SEL)arg1;

@end
