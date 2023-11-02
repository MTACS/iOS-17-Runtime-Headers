
@interface REElementDataSourceUpdate : NSObject {
    REElement * _element;
    NSString * _section;
    unsigned long long  _type;
}

@property (nonatomic, readonly) REElement *element;
@property (nonatomic, readonly) NSString *section;
@property (nonatomic, readonly) unsigned long long type;

+ (id)insertElement:(id)arg1 inSection:(id)arg2;
+ (id)refreshElement:(id)arg1 inSection:(id)arg2;
+ (id)reloadElement:(id)arg1 inSection:(id)arg2;
+ (id)removeElement:(id)arg1 inSection:(id)arg2;

- (void).cxx_destruct;
- (id)element;
- (unsigned long long)hash;
- (id)initWithElement:(id)arg1 section:(id)arg2 updateType:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (id)section;
- (unsigned long long)type;

@end
