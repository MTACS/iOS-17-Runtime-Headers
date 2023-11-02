
@interface OADTableStyleCollection : NSObject {
    NSString * _defaultTableStyleId;
    NSMutableDictionary * _styleMap;
    NSMutableArray * _styles;
}

@property (nonatomic, copy) NSString *defaultTableStyleId;

- (void).cxx_destruct;
- (void)addTableStyle:(id)arg1;
- (id)defaultTableStyleId;
- (id)init;
- (void)setDefaultTableStyleId:(id)arg1;
- (id)tableStyleWithId:(id)arg1;
- (id)tableStyles;

@end
