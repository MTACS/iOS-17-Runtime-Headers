
@interface IEBehaviorResponse : IEResponse {
    NSString * _name;
    NSDictionary * _parameters;
    IEBehaviorResponseUndo * _undo;
}

@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSDictionary *parameters;
@property (nonatomic, retain) IEBehaviorResponseUndo *undo;

- (void).cxx_destruct;
- (id)name;
- (id)parameters;
- (void)setName:(id)arg1;
- (void)setParameters:(id)arg1;
- (void)setUndo:(id)arg1;
- (id)undo;

@end
