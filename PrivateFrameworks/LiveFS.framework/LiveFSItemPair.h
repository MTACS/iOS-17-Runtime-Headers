
@interface LiveFSItemPair : NSObject <NSCopying> {
    NSString * _filename;
    NSString * _itemId;
}

@property (readonly) NSString *filename;
@property (readonly) NSString *itemId;

+ (id)newWithParent:(id)arg1 fname:(id)arg2;
+ (id)newWithParent:(id)arg1 fname:(id)arg2 caseSensitivity:(bool)arg3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)filename;
- (unsigned long long)hash;
- (id)initWithParent:(id)arg1 fname:(id)arg2 caseSensitivity:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (id)itemId;

@end
