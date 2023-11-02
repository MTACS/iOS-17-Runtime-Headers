
@interface VCPCoreMLRequest : NSObject {
    MLModel * _model;
}

@property (nonatomic, readonly) MLModel *model;

- (void).cxx_destruct;
- (id)initWithModelName:(id)arg1;
- (id)model;

@end
