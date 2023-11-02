
@interface REElementUpdateOperation : NSObject {
    REElement * _element;
    RESectionPath * _movedToPath;
    RESectionPath * _path;
    unsigned long long  _type;
}

@property (nonatomic, readonly) REElement *element;
@property (nonatomic, readonly) RESectionPath *movedToPath;
@property (nonatomic, readonly) RESectionPath *path;
@property (nonatomic, readonly) unsigned long long type;

+ (id)insertElement:(id)arg1 atPath:(id)arg2;
+ (id)moveElement:(id)arg1 fromPath:(id)arg2 toPath:(id)arg3;
+ (id)refreshElement:(id)arg1 atPath:(id)arg2;
+ (id)reloadElement:(id)arg1 atPath:(id)arg2;
+ (id)removeElement:(id)arg1 atPath:(id)arg2;

- (void).cxx_destruct;
- (id)description;
- (id)element;
- (unsigned long long)hash;
- (id)initWithElement:(id)arg1 path:(id)arg2 newPath:(id)arg3 updateType:(unsigned long long)arg4;
- (bool)isEqual:(id)arg1;
- (id)movedToPath;
- (id)path;
- (unsigned long long)type;

@end
