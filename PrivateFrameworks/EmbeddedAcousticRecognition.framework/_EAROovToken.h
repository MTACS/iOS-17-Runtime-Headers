
@interface _EAROovToken : NSObject {
    long long  _frequency;
    NSString * _orthography;
    NSSet * _prons;
}

@property (nonatomic, readonly) long long frequency;
@property (nonatomic, readonly) NSString *orthography;
@property (nonatomic, readonly) NSSet *prons;

- (void).cxx_destruct;
- (long long)frequency;
- (id)initWithOrthography:(id)arg1 prons:(id)arg2 frequency:(long long)arg3;
- (id)orthography;
- (id)prons;

@end
