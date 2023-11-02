
@interface MXMSampleData : NSObject <NSCopying, NSFastEnumeration, NSMutableCopying, NSSecureCoding> {
    NSArray * _enumSet;
    NSMutableDictionary * _tagsToSampleSets;
}

@property (retain) NSArray *enumSet;
@property (nonatomic, readonly) unsigned long long numberOfSamples;
@property (nonatomic, readonly) unsigned long long numberOfSets;
@property (nonatomic, readonly, copy) NSArray *samples;
@property (nonatomic, readonly, copy) NSSet *tags;
@property (nonatomic, retain) NSMutableDictionary *tagsToSampleSets;

+ (id)data;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_appendAttribute:(id)arg1;
- (void)_appendData:(id)arg1;
- (void)_appendSet:(id)arg1;
- (id)_dataMatchingFilter:(id)arg1;
- (id)_sampleSetsWithTag:(id)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)dataMatchingFilter:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)enumSet;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSet:(id)arg1;
- (id)initWithSets:(id)arg1;
- (id)mutableCopy;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)numberOfSamples;
- (unsigned long long)numberOfSets;
- (id)sampleSetWithTag:(id)arg1 attribute:(id)arg2;
- (id)sampleSetWithTag:(id)arg1 attributes:(id)arg2;
- (id)sampleSetsWithTag:(id)arg1;
- (id)samples;
- (void)setEnumSet:(id)arg1;
- (void)setTagsToSampleSets:(id)arg1;
- (id)tags;
- (id)tagsToSampleSets;

@end
