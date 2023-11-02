
@interface ICCROrderedSetElement : NSObject <ICCRDataType, ICCREquatable, NSCopying> {
    ICCRRegisterLatest * _index;
    <ICCRDataType><ICCRCoding> * _value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ICCRRegisterLatest *index;
@property (readonly) Class superclass;
@property (nonatomic, retain) <ICCRDataType><ICCRCoding> *value;

+ (id)temporaryElementWithValue:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (id)description;
- (void)encodeIntoProtobufSetElement:(void*)arg1 coder:(id)arg2;
- (unsigned long long)hash;
- (id)index;
- (id)initWithProtobufSetElement:(const void*)arg1 decoder:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)mergeWith:(id)arg1;
- (void)realizeLocalChangesIn:(id)arg1;
- (void)setDocument:(id)arg1;
- (void)setIndex:(id)arg1;
- (void)setValue:(id)arg1;
- (id)tombstone;
- (id)value;
- (void)walkGraph:(id /* block */)arg1;

@end
