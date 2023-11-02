
@interface HLPHelpLocale : NSObject {
    NSArray * _isoCodes;
    NSString * _path;
}

@property (nonatomic, copy) NSArray *isoCodes;
@property (nonatomic, copy) NSString *path;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithDictionary:(id)arg1;
- (id)isoCodes;
- (id)path;
- (void)setIsoCodes:(id)arg1;
- (void)setPath:(id)arg1;

@end
