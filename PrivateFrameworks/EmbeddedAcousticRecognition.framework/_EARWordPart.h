
@interface _EARWordPart : NSObject {
    unsigned long long  _frequency;
    NSString * _orthography;
    NSString * _phoneticOrthography;
    NSSet * _pronunciations;
    long long  _tag;
    NSString * _tagName;
}

@property (nonatomic, readonly) unsigned long long frequency;
@property (nonatomic, readonly) NSString *orthography;
@property (nonatomic, readonly) NSString *phoneticOrthography;
@property (nonatomic, readonly) NSSet *pronunciations;
@property (nonatomic, readonly) long long tag;
@property (nonatomic, readonly) NSString *tagName;

- (void).cxx_destruct;
- (unsigned long long)frequency;
- (id)initWithOrthography:(id)arg1 pronunciations:(id)arg2 tag:(long long)arg3;
- (id)initWithOrthography:(id)arg1 pronunciations:(id)arg2 tagName:(id)arg3 frequency:(unsigned long long)arg4;
- (id)initWithOrthography:(id)arg1 pronunciations:(id)arg2 tagName:(id)arg3 frequency:(unsigned long long)arg4 phoneticOrthography:(id)arg5;
- (id)orthography;
- (id)phoneticOrthography;
- (id)pronunciations;
- (long long)tag;
- (id)tagName;

@end