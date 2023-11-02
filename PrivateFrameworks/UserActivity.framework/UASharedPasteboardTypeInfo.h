
@interface UASharedPasteboardTypeInfo : NSObject <NSCopying, NSSecureCoding> {
    NSFileHandle * _dataFile;
    NSNumber * _index;
    NSNumber * _offset;
    bool  _preferFileRep;
    long long  _size;
    NSString * _type;
    NSString * _typeHint;
    NSUUID * _uuid;
}

@property (retain) NSFileHandle *dataFile;
@property (copy) NSNumber *index;
@property (copy) NSNumber *offset;
@property bool preferFileRep;
@property long long size;
@property (copy) NSString *type;
@property (copy) NSString *typeHint;
@property (copy) NSUUID *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataFile;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)index;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)offset;
- (bool)preferFileRep;
- (void)setDataFile:(id)arg1;
- (void)setIndex:(id)arg1;
- (void)setOffset:(id)arg1;
- (void)setPreferFileRep:(bool)arg1;
- (void)setSize:(long long)arg1;
- (void)setType:(id)arg1;
- (void)setTypeHint:(id)arg1;
- (void)setUuid:(id)arg1;
- (long long)size;
- (id)type;
- (id)typeHint;
- (id)uuid;

@end
