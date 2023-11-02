
@interface _UICommandParentInserts : NSObject {
    NSArray * _atEndElements;
    NSArray * _atStartElements;
    NSMutableDictionary * _childInserts;
    NSMutableArray * _fallbackAfterElements;
    NSMutableArray * _fallbackBeforeElements;
}

@property (nonatomic, readonly) NSArray *atEndElements;
@property (nonatomic, readonly) NSArray *atStartElements;
@property (nonatomic, readonly) NSDictionary *childInserts;
@property (nonatomic, readonly) NSArray *fallbackAfterElements;
@property (nonatomic, readonly) NSArray *fallbackBeforeElements;

- (void).cxx_destruct;
- (void)_addFallbackBeforeElements:(id)arg1 fallbackAfterElements:(id)arg2;
- (void)_setAtStartElements:(id)arg1 atEndElements:(id)arg2;
- (void)_setBeforeElements:(id)arg1 afterElements:(id)arg2 aroundElement:(id)arg3;
- (id)atEndElements;
- (id)atStartElements;
- (id)childInserts;
- (id)fallbackAfterElements;
- (id)fallbackBeforeElements;

@end
