
@interface CUFileItem : NSObject <CUDictionaryCodable> {
    unsigned int  _flags;
    NSString * _name;
    long long  _size;
    int  _type;
}

@property (nonatomic, readonly) unsigned int flags;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) long long size;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithDictionary:(id)arg1;
- (unsigned int)flags;
- (id)initWithDictionary:(id)arg1 error:(id*)arg2;
- (id)name;
- (void)setName:(id)arg1;
- (void)setSize:(long long)arg1;
- (void)setType:(int)arg1;
- (long long)size;
- (int)type;

@end
