
@interface FBKDeletedItem : NSObject {
    NSNumber * _remoteID;
    unsigned long long  _type;
}

@property (nonatomic, retain) NSNumber *remoteID;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (id)description;
- (id)initWithData:(id)arg1;
- (id)remoteID;
- (void)setRemoteID:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
