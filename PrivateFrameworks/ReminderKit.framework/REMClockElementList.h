
@interface REMClockElementList : NSObject {
    NSArray * _elements;
}

@property (nonatomic, copy) NSArray *elements;

+ (long long)compareList:(id)arg1 toList:(id)arg2;
+ (bool)list:(id)arg1 isCompatibleToList:(id)arg2;

- (void).cxx_destruct;
- (id)description;
- (id)elements;
- (void)encodeIntoEntryArchive:(void*)arg1;
- (id)initWithCRVectorTimestampElements:(id)arg1;
- (id)initWithEntryArchive:(const void*)arg1;
- (id)initWithTTVectorTimestampElements:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setElements:(id)arg1;

@end
