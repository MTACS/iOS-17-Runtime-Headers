
@interface CPMLEvalutionResult : NSObject {
    unsigned long long  count;
    NSObject * object;
}

- (void).cxx_destruct;
- (double)getDouble;
- (int)getInt;
- (id)getList;
- (id)getListDict;
- (id)getString;
- (id)getStringList;
- (id)init:(id)arg1 withConfigurationList:(id)arg2;

@end
