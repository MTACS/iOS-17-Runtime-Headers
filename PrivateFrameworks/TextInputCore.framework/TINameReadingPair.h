
@interface TINameReadingPair : NSObject <NSCopying> {
    NSString * _name;
    NSString * _reading;
}

@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *reading;

+ (id)nameReadingPairWithName:(id)arg1 reading:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1 reading:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)reading;

@end
