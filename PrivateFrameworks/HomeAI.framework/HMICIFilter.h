
@interface HMICIFilter : HMFObject {
    NSArray * _attributes;
    NSString * _name;
    double  _probability;
}

@property (readonly) NSArray *attributes;
@property (readonly) NSString *name;
@property (readonly) double probability;

- (void).cxx_destruct;
- (id)applyToImage:(id)arg1 withProbability:(double)arg2;
- (id)attributeForKey:(id)arg1;
- (id)attributes;
- (id)expectedAttributeForKey:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)name;
- (double)probability;

@end
