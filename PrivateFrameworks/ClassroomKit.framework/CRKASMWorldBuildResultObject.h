
@interface CRKASMWorldBuildResultObject : NSObject {
    NSArray * _manageableLocations;
    <CRKASMRoster> * _roster;
}

@property (nonatomic, readonly, copy) NSArray *manageableLocations;
@property (nonatomic, readonly) <CRKASMRoster> *roster;

- (void).cxx_destruct;
- (id)init;
- (id)initWithRoster:(id)arg1 manageableLocations:(id)arg2;
- (id)manageableLocations;
- (id)roster;

@end
