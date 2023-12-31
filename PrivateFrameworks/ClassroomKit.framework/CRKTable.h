
@interface CRKTable : NSObject {
    <CRKTableEntries> * mEntries;
}

@property (nonatomic, readonly, copy) NSString *stringValue;

+ (id)parsableTableWithKeyValuePairs:(id)arg1;
+ (id)tableWithHeaders:(id)arg1 keyPaths:(id)arg2 objects:(id)arg3;

- (void).cxx_destruct;
- (id)columnLengths;
- (id)initWithEntries:(id)arg1;
- (unsigned long long)lengthOfLongestObjectInColumn:(unsigned long long)arg1;
- (id)stringValue;

@end
