
@interface ICCRRegister : NSObject <ICCRCoding, ICCRDataType> {
    ICCRDocument * _document;
}

@property (nonatomic, retain) id contents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) ICCRDocument *document;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)registerWithType:(unsigned long long)arg1 contents:(id)arg2;
+ (id)registerWithType:(unsigned long long)arg1 contents:(id)arg2 document:(id)arg3;

- (void).cxx_destruct;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (id)document;
- (void)encodeWithICCRCoder:(id)arg1;
- (id)initWithDocument:(id)arg1;
- (id)initWithICCRCoder:(id)arg1;
- (bool)isEqualContents:(id)arg1;
- (void)mergeWith:(id)arg1;
- (void)realizeLocalChangesIn:(id)arg1;
- (void)setDocument:(id)arg1;
- (id)tombstone;
- (void)walkGraph:(id /* block */)arg1;

@end
