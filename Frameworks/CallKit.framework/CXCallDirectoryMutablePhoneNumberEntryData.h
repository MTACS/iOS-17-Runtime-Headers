
@interface CXCallDirectoryMutablePhoneNumberEntryData : CXCallDirectoryPhoneNumberEntryData <NSCopying> {
    NSMutableData * _mutablePhoneNumberData;
}

@property (nonatomic, retain) NSMutableData *mutablePhoneNumberData;

- (void).cxx_destruct;
- (void)appendPhoneNumber:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)mutablePhoneNumberData;
- (void)setMutablePhoneNumberData:(id)arg1;

@end
