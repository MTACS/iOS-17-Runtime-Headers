
@interface MIOParserContext : NSObject {
    NSURL * _modelSpecificationFileURL;
}

@property (readonly, copy) NSURL *modelSpecificationFileURL;

- (void).cxx_destruct;
- (id)initWithModelSpecificationFileURL:(id)arg1;
- (id)modelSpecificationFileURL;

@end
