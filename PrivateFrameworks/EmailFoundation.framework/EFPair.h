
@interface EFPair : NSObject <NSCopying> {
    <NSObject> * _first;
    <NSObject> * _second;
}

@property (nonatomic, readonly) <NSObject> *first;
@property (nonatomic, readonly) <NSObject> *second;

+ (id)pairWithFirst:(id)arg1 second:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)first;
- (unsigned long long)hash;
- (id)initWithFirst:(id)arg1 second:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPair:(id)arg1;
- (id)second;

@end
