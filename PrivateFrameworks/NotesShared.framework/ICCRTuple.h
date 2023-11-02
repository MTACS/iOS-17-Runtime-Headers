
@interface ICCRTuple : NSObject <ICCRCoding, ICCRDataType> {
    NSArray * _contents;
}

@property (nonatomic, retain) NSArray *contents;
@property (readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)tupleWithArray:(id)arg1;

- (void).cxx_destruct;
- (id)contents;
- (unsigned long long)count;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (id)description;
- (void)encodeWithICCRCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithArray:(id)arg1;
- (id)initWithICCRCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeWith:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (void)realizeLocalChangesIn:(id)arg1;
- (void)setContents:(id)arg1;
- (void)setDocument:(id)arg1;
- (id)tombstone;
- (void)walkGraph:(id /* block */)arg1;

@end
