
@interface SNNMILProgramBuilder : NSObject {
    SNNMILContext * _context;
    NSMutableArray * _functionBuilders;
    SNNMILSourceLocation * _location;
    SNNMILProgram * _program;
}

@property (nonatomic, readonly) SNNMILContext *context;
@property (nonatomic, readonly) NSMutableArray *functionBuilders;
@property (nonatomic, readonly) SNNMILSourceLocation *location;
@property (nonatomic, readonly) SNNMILProgram *program;

- (void).cxx_destruct;
- (id)build;
- (id)context;
- (id)functionBuilders;
- (id)functionWithName:(id)arg1 location:(id)arg2;
- (id)init;
- (id)initWithContext:(id)arg1 location:(id)arg2;
- (id)location;
- (struct unique_ptr<MIL::Location, std::default_delete<MIL::Location>> { struct __compressed_pair<MIL::Location *, std::default_delete<MIL::Location>> { struct Location {} *x_1_1_1; } x1; })milLocation;
- (id)program;

@end
