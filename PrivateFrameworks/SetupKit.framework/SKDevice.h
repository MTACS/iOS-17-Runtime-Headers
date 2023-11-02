
@interface SKDevice : NSObject {
    unsigned short  _blePSM;
    NSString * _identifier;
}

@property (nonatomic) unsigned short blePSM;
@property (nonatomic, copy) NSString *identifier;

- (void).cxx_destruct;
- (unsigned short)blePSM;
- (id)description;
- (id)identifier;
- (void)setBlePSM:(unsigned short)arg1;
- (void)setIdentifier:(id)arg1;

@end
