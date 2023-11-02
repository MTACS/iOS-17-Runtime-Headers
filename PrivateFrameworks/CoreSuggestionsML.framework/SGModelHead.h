
@interface SGModelHead : NSObject {
    NSArray * _labels;
    NSString * _name;
    unsigned long long  _numberOfDimensions;
}

@property (nonatomic, readonly) NSArray *labels;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) unsigned long long numberOfDimensions;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1 key:(id)arg2;
- (id)labels;
- (id)name;
- (unsigned long long)numberOfDimensions;

@end
