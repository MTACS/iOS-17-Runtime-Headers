
@interface CTTransportKey : NSObject <NSCopying, NSSecureCoding> {
    int  _index;
    NSData * _key;
    NSData * _key_epki;
    bool  _last_resort;
    NSData * _retiredKey_epki;
}

@property (nonatomic) int index;
@property (nonatomic, retain) NSData *key;
@property (nonatomic, retain) NSData *key_epki;
@property (nonatomic) bool last_resort;
@property (nonatomic, retain) NSData *retiredKey_epki;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (int)index;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(id)arg1 epki:(id)arg2 forIdx:(int)arg3 toReplace:(id)arg4 epki:(id)arg5;
- (id)initWithKey:(id)arg1 epki:(id)arg2 forIdx:(int)arg3 toReplaceEpki:(id)arg4 isLastResort:(bool)arg5;
- (id)initWithKey:(id)arg1 forIdx:(int)arg2 toReplace:(id)arg3;
- (id)key;
- (id)key_epki;
- (bool)last_resort;
- (id)retiredKey_epki;
- (void)setIndex:(int)arg1;
- (void)setKey:(id)arg1;
- (void)setKey_epki:(id)arg1;
- (void)setLast_resort:(bool)arg1;
- (void)setRetiredKey_epki:(id)arg1;

@end
