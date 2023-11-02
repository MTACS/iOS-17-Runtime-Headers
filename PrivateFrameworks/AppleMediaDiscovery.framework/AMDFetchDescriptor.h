
@interface AMDFetchDescriptor : NSObject {
    NSArray * __columnSpecs;
    long long  __domain;
    NSString * __id;
    int  __keyColumn;
    int  __listColumn;
    BOOL  __saveAsType;
    NSString * __statement;
    int  __valueColumn;
}

@property (nonatomic, retain) NSArray *_columnSpecs;
@property (nonatomic) long long _domain;
@property (nonatomic, retain) NSString *_id;
@property (nonatomic) int _keyColumn;
@property (nonatomic) int _listColumn;
@property (nonatomic) BOOL _saveAsType;
@property (nonatomic, retain) NSString *_statement;
@property (nonatomic) int _valueColumn;

+ (id)extractPart:(id)arg1 from:(id)arg2 required:(bool)arg3 error:(id*)arg4;
+ (BOOL)getCodeForSaveAsType:(id)arg1;
+ (id)refreshAggregationDescriptors:(id)arg1 forDomain:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)_columnSpecs;
- (long long)_domain;
- (id)_id;
- (int)_keyColumn;
- (int)_listColumn;
- (BOOL)_saveAsType;
- (id)_statement;
- (int)_valueColumn;
- (id)getColumnSpecs;
- (long long)getDomain;
- (id)getId;
- (id)getStatement;
- (id)initWithDict:(id)arg1 usingSchema:(id)arg2 error:(id*)arg3;
- (bool)isPersistable;
- (id)persist:(id)arg1 error:(id*)arg2;
- (id)persistObject:(id)arg1 error:(id*)arg2;
- (void)setDomain:(long long)arg1;
- (void)set_columnSpecs:(id)arg1;
- (void)set_domain:(long long)arg1;
- (void)set_id:(id)arg1;
- (void)set_keyColumn:(int)arg1;
- (void)set_listColumn:(int)arg1;
- (void)set_saveAsType:(BOOL)arg1;
- (void)set_statement:(id)arg1;
- (void)set_valueColumn:(int)arg1;

@end
