
@interface WBFieldChangeRecord : NSObject {
    NSDictionary * _attributes;
    int  _changeType;
    WBSCRDTField * _field;
    long long  _identifier;
    CKRecord * _record;
}

@property (nonatomic, readonly, copy) NSDictionary *attributes;
@property (nonatomic, readonly) int changeType;
@property (nonatomic, readonly) WBSCRDTField *field;
@property (nonatomic, readonly) long long identifier;
@property (nonatomic, readonly) CKRecord *record;

- (void).cxx_destruct;
- (id)attributes;
- (int)changeType;
- (id)field;
- (long long)identifier;
- (id)initWithField:(id)arg1 changeType:(int)arg2 attributes:(id)arg3 record:(id)arg4 identifier:(long long)arg5;
- (id)record;

@end
