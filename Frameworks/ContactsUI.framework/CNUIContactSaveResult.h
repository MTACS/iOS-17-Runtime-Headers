
@interface CNUIContactSaveResult : NSObject {
    CNMutableContact * _contact;
    NSArray * _identifiersOfIssuedSaveRequests;
    bool  _success;
}

@property (nonatomic, readonly) CNMutableContact *contact;
@property (nonatomic, readonly) NSArray *identifiersOfIssuedSaveRequests;
@property (nonatomic, readonly) bool success;

- (void).cxx_destruct;
- (id)contact;
- (id)identifiersOfIssuedSaveRequests;
- (id)initWithSuccess:(bool)arg1 contact:(id)arg2 identifiersOfIssuedSaveRequests:(id)arg3;
- (bool)success;

@end
