
@interface PBFDataComponentObjectEntity : NSObject {
    NSString * _component;
    PBFDataRefreshContext * _context;
    id  _object;
}

@property (nonatomic, readonly) NSString *component;
@property (nonatomic, readonly) PBFDataRefreshContext *context;
@property (nonatomic, readonly) id object;

- (void).cxx_destruct;
- (id)component;
- (id)context;
- (id)description;
- (id)determineRefreshState;
- (id)initWithComponent:(id)arg1 object:(id)arg2 context:(id)arg3;
- (id)object;

@end
