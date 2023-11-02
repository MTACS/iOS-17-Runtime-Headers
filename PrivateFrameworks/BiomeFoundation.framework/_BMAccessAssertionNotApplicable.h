
@interface _BMAccessAssertionNotApplicable : NSObject <BMAccessAssertion> {
    BMAccessDescriptor * _descriptor;
    NSString * _path;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BMAccessDescriptor *descriptor;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *path;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)descriptor;
- (id)initWithDescriptor:(id)arg1;
- (id)path;

@end
