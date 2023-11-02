
@interface ICCRRegisterLatest : ICCRRegister {
    <ICCRDataType> * _contents;
    ICCRTimestamp * _timestamp;
}

@property (nonatomic, retain) ICCRTimestamp *timestamp;

- (void).cxx_destruct;
- (void)_setContents:(id)arg1;
- (id)contents;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (id)description;
- (void)encodeIntoProtobufRegisterLatest:(void*)arg1 coder:(id)arg2;
- (void)encodeWithICCRCoder:(id)arg1;
- (id)initWithContents:(id)arg1 document:(id)arg2;
- (id)initWithContents:(id)arg1 timestamp:(id)arg2 document:(id)arg3;
- (id)initWithICCRCoder:(id)arg1;
- (id)initWithProtobufRegisterLatest:(const void*)arg1 decoder:(id)arg2;
- (bool)isEqualContents:(id)arg1;
- (void)mergeWith:(id)arg1;
- (void)mergeWithRegisterLatest:(id)arg1;
- (void)realizeLocalChangesIn:(id)arg1;
- (void)setContents:(id)arg1;
- (void)setDocument:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (id)timestamp;
- (id)tombstone;
- (void)walkGraph:(id /* block */)arg1;

@end
