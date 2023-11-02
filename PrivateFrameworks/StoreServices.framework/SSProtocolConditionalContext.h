
@interface SSProtocolConditionalContext : NSObject <NSCopying> {
    id /* block */  _itemLookupBlock;
    NSString * _platformName;
    NSString * _systemVersion;
}

@property (nonatomic, copy) id /* block */ itemLookupBlock;
@property (nonatomic, copy) NSString *platformName;
@property (nonatomic, copy) NSString *systemVersion;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id /* block */)itemLookupBlock;
- (id)platformName;
- (void)setItemLookupBlock:(id /* block */)arg1;
- (void)setPlatformName:(id)arg1;
- (void)setSystemVersion:(id)arg1;
- (id)systemVersion;

@end
