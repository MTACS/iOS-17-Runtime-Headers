
@interface MGGroupsActivity : NSObject {
    NSString * _name;
    NSDate * _when;
}

@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) NSDate *when;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithName:(id)arg1;
- (id)name;
- (id)when;

@end
