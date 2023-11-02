
@interface SGModelSource : NSObject {
    Class  _modelClass;
    PMLSessionDescriptor * _sessionDescriptor;
}

@property (nonatomic, retain) Class modelClass;
@property (nonatomic, retain) PMLSessionDescriptor *sessionDescriptor;

- (void).cxx_destruct;
- (id)initWithSessionDescriptor:(id)arg1 modelClass:(Class)arg2;
- (Class)modelClass;
- (id)sessionDescriptor;
- (void)setModelClass:(Class)arg1;
- (void)setSessionDescriptor:(id)arg1;

@end
