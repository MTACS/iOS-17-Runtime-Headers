
@interface ECIMAPAppendInfo : NSObject {
    unsigned long long  _newMessageUID;
    unsigned int  _uidValidity;
}

@property (nonatomic) unsigned long long newMessageUID;
@property (nonatomic) unsigned int uidValidity;

- (unsigned long long)newMessageUID;
- (void)setNewMessageUID:(unsigned long long)arg1;
- (void)setUidValidity:(unsigned int)arg1;
- (unsigned int)uidValidity;

@end
