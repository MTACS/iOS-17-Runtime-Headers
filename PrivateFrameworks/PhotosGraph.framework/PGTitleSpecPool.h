
@interface PGTitleSpecPool : NSObject {
    NSArray * _specs;
}

@property (readonly) NSArray *specs;

+ (id)poolWithSpecs:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)initWithSpecs:(id)arg1;
- (id)specs;

@end
