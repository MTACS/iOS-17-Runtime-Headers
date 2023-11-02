
@interface NEIKEv2PrivateNotify : NSObject <NSCopying> {
    NSData * _notifyData;
    unsigned short  _notifyStatus;
}

@property (nonatomic, readonly) NSData *notifyData;
@property (nonatomic, readonly) unsigned short notifyStatus;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithNotifyStatus:(unsigned short)arg1 notifyData:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)notifyData;
- (unsigned short)notifyStatus;

@end
