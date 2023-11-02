
@interface _BKSCloneMirroringModeRequest : NSObject {
    NSString * _displayUUID;
    unsigned long long  _mode;
}

@property (nonatomic, copy) NSString *displayUUID;
@property (nonatomic) unsigned long long mode;

- (void).cxx_destruct;
- (id)displayUUID;
- (unsigned long long)mode;
- (void)setDisplayUUID:(id)arg1;
- (void)setMode:(unsigned long long)arg1;

@end
