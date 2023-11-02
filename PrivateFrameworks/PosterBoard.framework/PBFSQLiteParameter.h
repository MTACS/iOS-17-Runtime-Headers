
@interface PBFSQLiteParameter : NSObject <PBFSQLiteQueryValue> {
    NSString * _parameterName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *parameterName;
@property (readonly) Class superclass;

+ (id)unnamedParameter;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithParameterName:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)parameterName;
- (id)pbf_valueForSQLiteQuery;

@end
