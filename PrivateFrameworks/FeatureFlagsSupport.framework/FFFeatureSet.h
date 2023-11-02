
@interface FFFeatureSet : NSObject {
    NSArray * _features;
    FFFeatureSetIdentifier * _identifier;
}

@property (nonatomic, retain) NSArray *features;
@property (nonatomic, readonly) FFFeatureSetIdentifier *identifier;

- (void).cxx_destruct;
- (id)features;
- (id)identifier;
- (id)initWithGroup:(id)arg1 set:(id)arg2;
- (id)initWithIdentifier:(id)arg1;
- (void)setFeatures:(id)arg1;

@end
