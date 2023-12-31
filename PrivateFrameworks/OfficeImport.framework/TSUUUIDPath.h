
@interface TSUUUIDPath : NSObject <NSCopying, NSFastEnumeration> {
    NSArray * _uuids;
}

@property (nonatomic, readonly) NSString *UUIDPathString;
@property (nonatomic, readonly) NSUUID *lastUUID;
@property (nonatomic, readonly) NSArray *uuids;

+ (id)lastUUIDFromUUIDPathString:(id)arg1;

- (void).cxx_destruct;
- (id)UUIDPathByAppendingUUID:(id)arg1;
- (id)UUIDPathString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)description;
- (unsigned long long)hash;
- (id)initWithArray:(id)arg1;
- (id)initWithUUIDPathString:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)lastUUID;
- (id)uuids;

@end
