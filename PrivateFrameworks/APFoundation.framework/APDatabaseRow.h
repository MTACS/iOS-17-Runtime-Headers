
@interface APDatabaseRow : NSObject <APDataObject> {
    NSDictionary * _columns;
    bool  _isNewObject;
    NSDictionary * _readOnlyColumnsDic;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isNewObject;
@property (nonatomic, readonly) NSNumber *rowid;
@property (readonly) Class superclass;

+ (id)selectAll;

- (void).cxx_destruct;
- (void)_createColumns;
- (void)addReadOnlyColumnName:(id)arg1;
- (bool)deleteFromDB;
- (id)description;
- (void)forwardInvocation:(id)arg1;
- (id)init;
- (id)initAsNewObject;
- (bool)isDataObjectEqual:(id)arg1;
- (bool)isNewObject;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)save;
- (void)setIsNewObject:(bool)arg1;
- (void)setValue:(id)arg1 forColumnName:(id)arg2;
- (long long)typeForColumnName:(id)arg1;
- (id)valueForColumnName:(id)arg1;

@end
